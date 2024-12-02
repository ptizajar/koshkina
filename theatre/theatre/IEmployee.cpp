#include "IEmployee.h"

IEmployee::IEmployee() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    this->_experience = 0;
}

IEmployee::IEmployee(std::string name, std::string surname, int age, int experience) :IPerson(name, surname, age), _experience(experience) {}
IEmployee::IEmployee(int experience) :_experience(experience) {}
IEmployee::~IEmployee() {};


void IEmployee::setExperience(int experience) {
    if (experience >= 0) {
        this->_experience = experience;
    }
    else {
        std::cout << "Wrong value" << std::endl;
    }
}

int IEmployee::getExperience() {
    return _experience;
}
void IEmployee::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Experience: " << _experience << std::endl;
}
