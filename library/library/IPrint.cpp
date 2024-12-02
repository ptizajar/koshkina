#include <iostream>
#include "IPrint.h"
using namespace std;


void IPrint::displayPrint() {
    cout << "Title " << _title << endl;
    cout << "Age Limit " << _ageLimit << endl;
}


IPrint::IPrint() {
    this->_title = "undefined";
    this->_ageLimit = 0;
}

IPrint::IPrint(std::string title, int ageLimit) :_title(title),_ageLimit(ageLimit) {}
IPrint::~IPrint() {}


void IPrint::setTitle(std::string title) {
    this->_title = title;

}

std::string IPrint::getTitle() {
    return _title;
}


void IPrint::setAgeLimit(int ageLimit) {
    if (ageLimit >= 0) this->_ageLimit = ageLimit;
    else cout << "Wrong value" << endl;

}

int IPrint::getAgeLimit() {
    return _ageLimit;
}

