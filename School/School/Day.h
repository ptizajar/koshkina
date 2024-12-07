#pragma once
#include <iostream>
#include "Lesson.h"

class Day {
public:
    Day();
    Day(Lesson** lessons,int quantityLessons,std::string name);
    ~Day();

    void displayDay();


    void setLessons(Lesson** lessons);
    Lesson** getLessons();
    void setQuantityLessons(int quantityLessons);
    int getQuantityLessons();
    void setName(std::string name);
    std::string getName();


private:
    Lesson** _lessons;
    int _quantityLessons;
    std::string _name;

};






