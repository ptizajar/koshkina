#include <iostream>
#include "IPerson.h"
using namespace std;


void IPerson::displayPerson() {
    cout << "Name " << _name << endl;
    cout << "Surname " << _surname << endl;
}


IPerson::IPerson() {
    this->_name = "undefined";
    this->_surname = "undefined";
}

IPerson::IPerson(std::string name, std::string surname) :_name(name), _surname(surname) {}
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


