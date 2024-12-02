#include <iostream>
#include "IPerson.h"
using namespace std;


void IPerson::displayPerson() {
    cout << endl << "Name " << _name << endl;
    cout << "Surname " << _surname << endl;
    cout << "Age " << _age << endl;
}


IPerson::IPerson() {
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = 0;
}

IPerson::IPerson(std::string name, std::string surname, int age) :_name(name), _surname(surname), _age(age) {}
IPerson::~IPerson() {}


void IPerson::setName(std::string name) {
    this->_name = name;
}

std::string IPerson::getName() {
    return _name;
}
void IPerson::setSurname(std::string surname) {
    this->_surname = surname;
}

std::string IPerson::getSurname() {
    return _surname;
}


void IPerson::setAge(int age) {
    if (age > 0) this->_age = age;
    else cout << "Wrong value" << endl;

}

int IPerson::getAge() {
    return _age;
}

