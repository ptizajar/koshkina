#include <iostream>
#include "Buyer.h"
using namespace std;


void Buyer::display() {
    cout << "Money " << _money << endl;
}


Buyer::Buyer() {
    this->_money = 0;
}

Buyer::Buyer(double money) : _money(money) {}
Buyer::~Buyer() {}

void Buyer::setMoney(double money) {

    this->_money = money;


}

double Buyer::getMoney() {
    return _money;
}


