#include <iostream>
#include "Snack.h"
using namespace std;


void Snack::display() {
    cout << "Name " << _name << endl;
    cout << "Price " << _price << endl;
}


Snack::Snack() {
    this->_name = "undefined";
    this->_price = 0;
}

Snack::Snack(std::string name, double price) :_name(name), _price(price) {}
Snack::~Snack() {}


void Snack::setName(std::string name) {
    this->_name = name;
}

std::string Snack::getName() {
    return _name;
}
void Snack::setPrice(double price) {
    if (price > 0) {
        this->_price = price;
    }
    else {
        cout << "Wrong value" << endl;
    }
}

double Snack::getPrice() {
    return _price;
}


