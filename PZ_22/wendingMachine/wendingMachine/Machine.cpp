#include "Machine.h";
#include "Slot.h"

Machine::Machine() {
    this->_slots = nullptr;
    this->_quantitySlots = 0;
    this->_money = 0;
}

Machine::Machine(Slot** slots, int quantitySlots,double money) : _slots(slots), _quantitySlots(quantitySlots),_money(money) {}
Machine::~Machine() {};


void Machine::setQuantitySlots(int quantitySlots) {
    if (quantitySlots > 0) {
        this->_quantitySlots = quantitySlots;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Machine::getQuantitySlots() {
    return _quantitySlots;
}

void Machine::setSlots(Slot** slots) {
    this->_slots = slots;
}

Slot** Machine::getSlots() {
    return _slots;
}

void Machine::setMoney(double money) {
    if (money >= 0) {
        this->_money = money;
    }
    else std::cout << "Wrong value" << std::endl;
}

double Machine::getMoney() {
    return _money;
}


void Machine::add(Slot* slot) {
    if (this->_slots == nullptr) {
        this->_slots = new Slot * [1]{ slot };
        this->_quantitySlots++;
    }
    else {
        Slot** p = new Slot * [(this->_quantitySlots) + 1];
        for (int i = 0; i < this->_quantitySlots; i++) {
            p[i] = this->_slots[i];
        }
        p[this->_quantitySlots] = slot;
        this->_slots = p;
        this->_quantitySlots++;

    }

}

void Machine::sell(Snack* snack, Buyer* buyer) {
    if (buyer->getMoney() >= snack->getPrice()) {
        buyer->setMoney(buyer->getMoney() - snack->getPrice());
        for (int i = 0; i < _quantitySlots; i++) {
            if (_slots[i]->remove(snack)) {
                this->setMoney(this->getMoney() + snack->getPrice());
                std::cout << snack->getName() << " is sold"<<std::endl;
                return;
            }
        }
        std::cout << "No such snack" << std::endl;
        buyer->setMoney(buyer->getMoney() + snack->getPrice());
    }
    else {
        std::cout << "Not enough money" << std::endl;
    }
}

int Machine::emptySlots() {
    if (_slots == nullptr) {
        std::cout << "Nothing here" << std::endl;
        return 0;
    }
    else {
        int counter = 0;
        for (int i = 0; i < _quantitySlots; i++) {
            if (_slots[i]->getSnacks() == nullptr) {
                counter++;
            }
        }
        return counter;

    }
}

void Machine::display() {
    if (_slots == nullptr) {
        std::cout << "Nothing here" << std::endl;
    }
    else {
        std::cout << "Slots: " << std::endl;
        for (int i = 0; i < _quantitySlots; i++) {
            std::cout << "Slot"<<i+1<< std::endl;
            _slots[i]->display();
        }
        std::cout << "slots quantity: " << getQuantitySlots() << std::endl;
    }
}
