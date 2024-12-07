#include <iostream>
#include "Lesson.h"
using namespace std;


void Lesson::displayLesson() {
    cout << "Name " << _name << endl;
    cout << "Time " << _time << endl;
    cout << "Teacher " << endl<<_teacher->getName() << endl << _teacher->getSurname() << endl << _teacher->getExperience() << endl << _teacher->getSpeciality() << endl;
   
}


Lesson::Lesson() {
    this->_name = "undefined";
    this->_time = "undefined";
    this->_teacher = nullptr;
}

Lesson::Lesson(std::string name, std::string time,Teacher* teacher) :_name(name), _time(time) ,_teacher(teacher) {}
Lesson::~Lesson() {}


void Lesson::setName(std::string name) {
    this->_name = name;
}

std::string Lesson::getName() {
    return _name;
}
void Lesson::setTime(std::string time) {
    this->_time = time;
}

std::string Lesson::getTime() {
    return _time;
}

void Lesson::setTeacher(Teacher* teacher) {
    this->_teacher = teacher;
}

Teacher* Lesson::getTeacher() {
    return _teacher;
}
