#include <iostream>
#include "Person.h"
using namespace std;


void Person::display() {
    cout << "Количество денег " << _money << endl;
}


Person::Person() {
    this->_money = 0;
}

Person::Person(int money) : _money(money) {}
Person::~Person() {}

void Person::setMoney(int money) {
    this->_money = money;
}

void Person::buy(Machine* machine,Slot* slot,Snack* snack) {
    if (slot->getQuantity() > 0) {
        if (this->getMoney() >= snack->getCost()) {
            this->setMoney(this->getMoney() - snack->getCost());
            if (slot->getQuantity() == 1) {
                cout << "Извините, ваш снек застрял, возвращаем деньги" << endl;
                this->setMoney(this->getMoney() + snack->getCost());
            }
            else {
                cout << "Возьмите свой снек" << endl;
                machine->setMoney(machine->getMoney() + snack->getCost());
                slot->setQuantity(slot->getQuantity() - 1);
                if (slot->getQuantity() == 0) {
                    machine->setEmptySlots(machine->getEmptySlots() + 1);
                }
            }
        }
        else {
            cout << "Недостаточно средств " << endl;
        }
    }
    else {
        cout << "Снеков не осталось" << endl;
    }
}

int Person::getMoney() {
    return _money;
}


