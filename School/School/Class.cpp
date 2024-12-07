#include "Class.h"

Class::Class() {
    this->_pupils = nullptr;
    this->_quantityPupils = 0;
}

Class::Class(Pupil** pupils, int quantityPupils, std::string name) : _pupils(pupils), _quantityPupils(quantityPupils), _name(name) {}
Class::~Class() {};


void Class::setQuantityPupils(int quantityPupils) {
    if (quantityPupils > 0) {
        this->_quantityPupils = quantityPupils;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Class::getQuantityPupils() {
    return _quantityPupils;
}

void Class::setPupils(Pupil** pupils) {
    this->_pupils = pupils;
}

Pupil** Class::getPupils() {
    return _pupils;
}

std::string Class::getName() {
    return _name;
}

void Class::setName(std::string name) {
    this->_name = name;
}

void Class::displayClass() {
    for (int i = 0; i < getQuantityPupils(); i++) {
        _pupils[i]->displayPerson();
    }
}

