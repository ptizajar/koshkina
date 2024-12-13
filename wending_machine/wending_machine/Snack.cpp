#include <iostream>
#include "Snack.h"
using namespace std;


void Snack::display() {
    cout << "Название " << _name << endl;
    cout << "Цена " << _cost << endl;
    cout << "Калорийность " << _calories << endl;
}


Snack::Snack() {
    this->_name = "undefined";
    this->_cost = 0;
    this->_calories = 0;
}

Snack::Snack(std::string name, int cost,int calories) :_name(name), _cost(cost),_calories(calories) {}
Snack::~Snack() {}


void Snack::setName(std::string name) {
    this->_name = name;
}

std::string Snack::getName() {
    return _name;
}
void Snack::setCost(int cost) {
    if (cost > 0) {
        this->_cost = cost;
    }
    else {
        cout << "Неверное значение" << endl;
    }
}

int Snack::getCost() {
    return _cost;
}

void Snack::setCalories(int calories) {
    if (calories >= 0) {
        this->_calories = calories;
    }
    else {
        cout << "Неверное значение" << endl;
    }
}

int Snack::getCalories() {
    return _calories;
}

