#include "Pupil.h"

Pupil::Pupil() {
    setName("undefined");
    setSurname("undefined");
    this->_course = 0;
}

Pupil::Pupil(std::string name, std::string surname, int course) :IPerson(name, surname), _course(course) {}
Pupil::Pupil(int course) :_course(course) {}
Pupil::~Pupil() {};



void Pupil::setCourse(int course) {
    if (course > 0) {
        this->_course = course;
    }
    else {
        std::cout << "Wrong value" << std::endl;
    }
}


int Pupil::getCourse() {
    return _course;
}
void Pupil::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Course: " << _course << std::endl;
}
