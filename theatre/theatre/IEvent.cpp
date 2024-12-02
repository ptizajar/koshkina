#include <iostream>
#include "IEvent.h"
using namespace std;


void IEvent::displayEvent() {
    cout << "Title " << _title << endl;
    cout << "Age Limit " << _ageLimit << endl;
}


IEvent::IEvent() {
    this->_title = "undefined";
    this->_ageLimit = 0;
}

IEvent::IEvent(std::string title, int ageLimit) :_title(title), _ageLimit(ageLimit)  {}
IEvent::~IEvent() {}


void IEvent::setTitle(std::string title) {
    this->_title = title;

}

std::string IEvent::getTitle() {
    return _title;
}


void IEvent::setAgeLimit(int ageLimit) {
    if (ageLimit >= 0) this->_ageLimit = ageLimit;
    else cout << "Wrong value" << endl;

}

int IEvent::getAgeLimit() {
    return _ageLimit;
}


