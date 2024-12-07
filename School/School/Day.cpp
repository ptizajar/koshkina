#include "Day.h"

Day::Day() {
    this->_lessons = nullptr;
    this->_quantityLessons = 0;
    this->_name = "undefined";
}

Day::Day(Lesson** lessons, int quantityLessons,std::string name) : _lessons(lessons), _quantityLessons(quantityLessons),_name(name) {}
Day::~Day() {};


void Day::setQuantityLessons(int quantityLessons) {
    if (quantityLessons > 0) {
        this->_quantityLessons = quantityLessons;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Day::getQuantityLessons() {
    return _quantityLessons;
}

void Day::setLessons(Lesson** lessons) {
    this->_lessons = lessons;
}

Lesson** Day::getLessons() {
    return _lessons;
}

std::string Day::getName() {
    return _name;
}

void Day::setName(std::string name) {
    this->_name = name;
}

void Day::displayDay() {
    std::cout << "Day of the week " << _name << std::endl;
    for (int i = 0; i < getQuantityLessons(); i++) {
        _lessons[i]->displayLesson();
    }
}

