#include "Week.h"
#include "Lesson.h"

Week::Week() {
    this->_days = nullptr;
    this->_quantityDays = 0;
}

Week::Week(Day** days, int quantityDays) : _days(days), _quantityDays(quantityDays) {}
Week::~Week() {};


void Week::setQuantityDays(int quantityDays) {
    if (quantityDays >0) {
        this->_quantityDays = quantityDays;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Week::getQuantityDays() {
    return _quantityDays;
}

void Week::setDays(Day** days) {
    this->_days = days;
}

Day** Week::getDays() {
    return _days;
}

void Week::displayWeek() {
    for (int i = 0; i < getQuantityDays(); i++) {
        _days[i]->displayDay();
       /* std::cout << _days[i]->getName() << std::endl;

        for (int j = 0; j < _days[i]->getQuantityLessons(); j++) {
            _days[i]->getLessons()[j]->displayLesson();
        }*/
    }
}