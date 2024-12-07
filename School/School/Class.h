#pragma once
#include <iostream>
#include "Pupil.h"

class Class {
public:
    Class();
    Class(Pupil** pupils, int quantityPupils, std::string name);
    ~Class();

    void displayClass();


    void setPupils(Pupil** pupils);
    Pupil** getPupils();
    void setQuantityPupils(int quantityPupils);
    int getQuantityPupils();
    void setName(std::string name);
    std::string getName();


private:
    Pupil** _pupils;
    int _quantityPupils;
    std::string _name;

};







