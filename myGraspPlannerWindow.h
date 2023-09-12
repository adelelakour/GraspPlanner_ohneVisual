//
// Created by adelelakour on 19.08.23.
//

#ifndef GRASPER_MYGRASPPLANNERWINDOWS_H
#define GRASPER_MYGRASPPLANNERWINDOWS_H
#include "GraspPlannerWindow.h"
#include <Eigen/Dense>
#include <array>
#include <string>


using Vector3f = Eigen::Vector3f; // Define an alias for convenience


class myGraspPlannerWindow : public GraspPlannerWindow{

public:
    std::string objectName;
    std::string robotName;
    int graspNumber = 0;
    std::array<Vector3f, 4>  ContactPoints;
    std::tuple<std::array<Vector3f, 4>, std::string> ContactData;

    myGraspPlannerWindow(std::string& robFile, std::string& eefName, std::string& preshape, std::string& objFile);

    ~myGraspPlannerWindow();

    void closeEEF ();

    void save_to_json(std::string objName,     std::tuple<std::array<Vector3f, 4>, std::string> ContactData);



};


#endif //GRASPER_MYGRASPPLANNERWINDOWS_H
