#include <iostream>
#include "Slot.h"
using namespace std;


void Slot::display() {
    cout << "Название " << _name << endl;
    cout << "Количество снеков " << _quantity << endl;
}


Slot::Slot() {
    this->_name = "undefined";
    this->_quantity = 0;
}

Slot::Slot(std::string name, int quantity) :_name(name), _quantity(quantity) {}
Slot::~Slot() {}


void Slot::setName(std::string name) {
    this->_name = name;
}

std::string Slot::getName() {
    return _name;
}
void Slot::setQuantity(int quantity) {
    if (quantity >= 0) {
        this->_quantity = quantity;
    }
    else {
        cout << "Неверное значение" << endl;
    }
}

int Slot::getQuantity() {
    return _quantity;
}


