#include "Teacher.h"
#include "IPerson.h"

Teacher::Teacher() {
    setName("undefined");
    setSurname("undefined");
    setExperience(0);
    this->_speciality = "undefined";
}

Teacher::Teacher(std::string name, std::string surname, int experience, std::string speciality) :IPerson(name, surname), IEmployee(experience), _speciality(speciality) {}
Teacher::~Teacher() {};


void Teacher::setSpeciality(std::string speciality) {
    this->_speciality = speciality;
}

std::string Teacher::getSpeciality() {
    return _speciality;
}
void Teacher::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Experience: " << getExperience() << std::endl;
    std::cout << "Speciality: " << _speciality << std::endl;
}
