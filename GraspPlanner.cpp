#include <VirtualRobot/VirtualRobot.h>
#include <VirtualRobot/RuntimeEnvironment.h>

#include <string>
#include <iostream>
#include <filesystem> // Include the filesystem library

using std::cout;
using std::endl;
using namespace VirtualRobot;
namespace fs = std::filesystem; // Alias for the filesystem namespace

#include <Eigen/Core>
#include <Eigen/Geometry>

#include "GraspPlannerWindow.h"
#include "myGraspPlannerWindow.h"


int main(int argc, char* argv[])
{
    VirtualRobot::init(argc, argv, "Simox Grasp Planner");
    std::cout << " --- START --- " << std::endl;
    std::cout << endl << "Hint: You can start this demo for different hands:" << std::endl;
    std::cout << "GraspPlanner --robot robots/iCub/iCub.xml --endeffector \"Left Hand\" --preshape \"Grasp Preshape\"" << std::endl;
    std::cout << "GraspPlanner --robot robots/Shadow_Dexterous_Hand/shadowhand.xml --endeffector \"SHADOWHAND\" --preshape \"Grasp Preshape\"" << std::endl;
    std::cout << "GraspPlanner --robot robots/Schunk_SAH/SAH_RightHand.xml --endeffector \"Right Hand\" --preshape \"Grasp Preshape\"" << std::endl;

    // --robot robots/iCub/iCub.xml --endeffector "Left Hand" --preshape "Grasp Preshape"
    std::string robot("robots/Schunk_SAH/SAH_RightHand.xml");
    VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(robot);
    std::string eef("Right Hand");

    std::string robFile = VirtualRobot::RuntimeEnvironment::getValue("robot");

    if (!robFile.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(robFile))
    {
        robot = robFile;
    }



    std::string eefname = VirtualRobot::RuntimeEnvironment::getValue("endeffector");

    if (!eefname.empty())
    {
        eef = eefname;
    }

 /*   std::string object("objects/large_marker.xml");
    std::string preshape("");

    std::string ps = VirtualRobot::RuntimeEnvironment::getValue("preshape");

    if (!ps.empty())
    {
        preshape = ps;
    }


    std::cout << "Using robot from " << robot << std::endl;
    std::cout << "End effector:" << eef << ", preshape:" << preshape << std::endl;
    std::cout << "Using object from " << object << std::endl;

    GraspPlannerWindow rw(robot, eef, preshape, object);

    rw.main();*/


    std::string xmlDirectory = "/home/adelelakour/SIMOX__lastVersion/simox/VirtualRobot/data/objects";

    std::vector <std::string> OBJECTS;

    for (const auto& entry : fs::directory_iterator(xmlDirectory)) {
        if (entry.is_regular_file() && entry.path().extension() == ".xml") {
            std::string xmlFile = entry.path().string();
            OBJECTS.push_back(xmlFile);
        }
    }



    std::string preshape("");
    std::string object = "";
    std::string objFile = "";
    std::string ps;


    ps = VirtualRobot::RuntimeEnvironment::getValue("preshape");

    if (!ps.empty())
    {
        preshape = ps;
    }



    VirtualRobot::RuntimeEnvironment::considerKey("robot");
    VirtualRobot::RuntimeEnvironment::considerKey("object");
    VirtualRobot::RuntimeEnvironment::considerKey("endeffector");
    VirtualRobot::RuntimeEnvironment::considerKey("preshape");
    VirtualRobot::RuntimeEnvironment::processCommandLine(argc, argv);
    VirtualRobot::RuntimeEnvironment::print();

    std::cout << "Using robot from " << robot << std::endl;
    std::cout << "End effector:" << eef << ", preshape:" << preshape << std::endl;
    std::cout << "Using object from " << object << std::endl;

   /* {
        std::string object1 ("objects/large_marker.xml");
        VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(object1);
        std::string objFile1 = VirtualRobot::RuntimeEnvironment::getValue("object1");
        VirtualRobot::RuntimeEnvironment::considerKey("object1");

        if (!objFile1.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(objFile1))
        {
            object1 = objFile1;
        }
        std::cout << "Using object from " << object1 << std::endl;
        GraspPlannerWindow rw(robot, eef, preshape, object1);
        rw.main();
    }


    {
        std::string object2 ("objects/apple.xml");
        VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(object2);
        std::string objFile2 = VirtualRobot::RuntimeEnvironment::getValue("object2");
        VirtualRobot::RuntimeEnvironment::considerKey("object2");


        if (!objFile2.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(objFile2))
        {
            object2 = objFile2;
        }
        std::cout << "Using object from " << object2 << std::endl;
        GraspPlannerWindow rww(robot, eef, preshape, object2);
        rww.main();

    }
*/



    for ( auto object : OBJECTS)
    {
        VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(object);
        objFile = VirtualRobot::RuntimeEnvironment::getValue("object");

        if (!objFile.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(objFile))
        {
            object = objFile;
        }

        std::cout << "Using object from " << object << std::endl;

        GraspPlannerWindow rw(robot, eef, preshape, object);

        rw.main();

        object = "";
        objFile = "";

    }

    return 0;
}

