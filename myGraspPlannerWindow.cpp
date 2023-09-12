//
// Created by adelelakour on 19.08.23.
//

#include <nlohmann/json.hpp>
#include "myGraspPlannerWindow.h"
#include <fstream>
using json = nlohmann::json;




myGraspPlannerWindow::myGraspPlannerWindow(std::string& robFile, std::string& eefName, std::string& preshape, std::string& objFile)
:GraspPlannerWindow( robFile, eefName, preshape, objFile)
{

}

myGraspPlannerWindow::~myGraspPlannerWindow() {
    // Destructor implementation, if needed
}



void myGraspPlannerWindow::save_to_json(std::string objName,     std::tuple<std::array<Vector3f, 4>, std::string> ContactData) {
    auto ContactPoints = std::get<0>(ContactData);
    std::string RobotHand = std::get<1> (ContactData);

    json newGraspPoints;
    for (const auto &vector: ContactPoints) {
        newGraspPoints.push_back(json::array({vector[0], vector[1], vector[2]}));
    }

    std::ifstream inputFile("Database2.json");
    json jsonData = json::parse(inputFile);
    inputFile.close();

    std::string objectName = objName; // Specify the object name
    std::string lastKey;

    if (!jsonData.contains(objectName)) {
        // If the object doesn't exist, create it and add the "Grasp1" key with value newGraspPoints
        jsonData[objectName]["Grasp1"] = newGraspPoints;

        std::ofstream outputFile("Database2.json");
        if (outputFile.is_open()) {
            outputFile << jsonData.dump(4); // Indent with 4 spaces for better readability
            outputFile.close();
            std::cout << "New object and grasp added: " << objectName << " (Grasp1)" << std::endl;
        } else {
            std::cerr << "Failed to save JSON file." << std::endl;
        }
    } else if (jsonData.contains(objectName)) {

        for (auto it = jsonData[objectName].begin(); it != jsonData[objectName].end(); ++it) {
            lastKey = it.key();
        }

        // Check if the last grasp key exists for the object
        if (jsonData[objectName].contains(lastKey)) {
            // Increment the last grasp key to create a new key (e.g., grasp4)
            int newGraspNumber = std::stoi(lastKey.substr(5)) + 1;
            std::string newGraspKey = "grasp" + std::to_string(newGraspNumber);

            jsonData[objectName][newGraspKey] = {
                    {"GraspPoints", newGraspPoints},
                    {"RobotHand", RobotHand}
            };


            // Output the updated JSON
            std::ofstream outputFile("Database2.json");
            if (outputFile.is_open()) {
                outputFile << jsonData.dump(4); // Indent with 4 spaces for better readability
                outputFile.close();
                std::cout << "New grasp added: " << newGraspKey << std::endl;
            } else {
                std::cerr << "Failed to save JSON file." << std::endl;
            }
        } else if (!jsonData.contains(objectName)) {
            jsonData[objectName]["Grasp1"] = {
                    {"GraspPoints", newGraspPoints},
                    {"RobotHand", RobotHand}
            };

        }
    }
}




void myGraspPlannerWindow::closeEEF ()
{
    contacts.clear();

    if (eefCloned && eefCloned->getEndEffector(eefName))
    {
        contacts = eefCloned->getEndEffector(eefName)->closeActors(object);

        // these four lines are writen by me

        objectName = object->getName();
        ContactPoints[0] = contacts[0].contactPointObstacleLocal / 100;
        ContactPoints[1] = contacts[1].contactPointObstacleLocal / 100;
        ContactPoints[2] = contacts[2].contactPointObstacleLocal / 100;
        ContactPoints[3] = contacts[3].contactPointObstacleLocal / 100;
        robotName = robot->getName();
        ContactData = std::make_tuple(ContactPoints, robotName);

        save_to_json(objectName, ContactData);



        float qual = qualityMeasure->getGraspQuality();
        bool isFC = qualityMeasure->isGraspForceClosure();
        std::stringstream ss;
        ss << std::setprecision(3);
        ss << "Grasp Nr " << grasps->getSize() << "\nQuality: " << qual << "\nForce closure: ";

        if (isFC)
        {
            ss << "yes";
        }
        else
        {
            ss << "no";
        }

        UI.labelInfo->setText(QString(ss.str().c_str()));
    }

    buildVisu();
}
