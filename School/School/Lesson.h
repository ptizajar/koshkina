#pragma once
#include <iostream>
#include "Teacher.h"

class Lesson {
public:
    Lesson();
    Lesson(std::string name, std::string time,Teacher* teacher);
    ~Lesson();

    void displayLesson();


    void setName(std::string name);
    std::string getName();
    void setTime(std::string time);
    std::string getTime();
    void setTeacher(Teacher* teacher);
    Teacher* getTeacher();


private:
    std::string _name;
    std::string _time;
    Teacher* _teacher;

};





