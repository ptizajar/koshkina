#include <iostream>
#include "Human.h"
using namespace age;
using namespace std;

Human Human::operator++() {
    _height += 10;
    return *this;
}

Human Human::operator--() {
    if (_height > 10) {
        _height -= 10;
        return *this;
    }

    else cout << "Height is to small" << endl;
}

Human Human::operator++(int) {
    Human t(*this);
    ++(*this);
    return t;
}

Human Human::operator--(int) {
    Human t(*this);
    --(*this);
    return t;
}

bool Human::operator<(Human other) {
    return this->_height < other._height;
}

bool Human::operator>(Human other) {
    return this->_height > other._height;
}

std::ostream& operator<<(std::ostream& output, Human t) {
    output << "Name: " << t._name << std::endl
        << "Surname: " << t._surname << std::endl
        << "Age: " << t._age << std::endl
        << "Weight: " << t._weight << std::endl
        << "Height: " << t._height << std::endl;
    return output;
}

void Human::imt() {
    float result = (_weight / 2.205) / ((_height / 39.37) * (_height / 39.37));
    cout << "IMT " << result << endl;
}
void Human::yearBorn(int thisYear) {
    cout << "Year " << thisYear - _age << endl;
}

void Human::display() {
    cout << endl << "Name " << _name << endl;
    cout << "Surname " << _surname << endl;
    cout << "Age " << _age << endl;
    cout << "Weight " << _weight << endl;
    cout << "Height " << _height << endl;
}

Human::Human() {
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = 0;
    this->_weight = 0;
    this->_height = 0;
}

Human::Human(std::string name, std::string surname, int age, int weight, int height):_name(correctAlpha(name)),_surname(correctAlpha(surname)),_age(correctCount(age)),_weight(correctCount(weight)),_height(correctCount(height)) {}

Human::Human(std::string name, std::string surname, int age, int weight): Human(name,surname,age,weight,0) {}

Human::Human(std::string name, std::string surname, int age) : Human(name, surname, age, 0, 0) {}

Human::Human(std::string name, std::string surname) : Human(name, surname, 0, 0, 0) {}

Human::Human(std::string name) : Human(name, "undefined", 0, 0, 0) {}

Human::~Human() {};


void Human::setName(std::string name) {
    this->_name = correctAlpha(name);
}

std::string Human::getName() {
    return _name;
}
void Human::setSurname(std::string surname) {
    this->_surname = correctAlpha(surname);
}

std::string Human::getSurname() {
    return _surname;
}

void Human::setAge(int age) {
    this->_age = correctCount(age);
}

int Human::getAge() {
    return _age;
}

void Human::setWeight(int weight) {
    this->_weight = correctCount(weight);
}

int Human::getWeight() {
    return _weight;
}

void Human::setHeight(int height) {
    this->_height = correctCount(height);

}

int Human::getHeight() {
    return _height;
}
