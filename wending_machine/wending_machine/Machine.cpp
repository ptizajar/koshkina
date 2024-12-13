#include "Machine.h";
#include "Slot.h"

Machine::Machine() {
    this->_quantity = 0;
    this->_emptySlots = 0;
    this->_money = 0;
}

Machine::Machine(int quantity, int emptySlots, int money) : _quantity(quantity), _emptySlots(emptySlots), _money(money) {}
Machine::~Machine() {};


void Machine::setQuantity(int quantity) {
    if (quantity >= 0) {
        this->_quantity = quantity;
    }
    else std::cout << "Неверное значение" << std::endl;
}

int Machine::getQuantity() {
    return _quantity;
}

void Machine::setEmptySlots(int emptySlots) {
    if (emptySlots >= 0) {
        this->_emptySlots = emptySlots;
    }
    else std::cout << "Неверное значение" << std::endl;
}

int Machine::getEmptySlots() {
    return _emptySlots;
}


void Machine::setMoney(int money) {
    if (money >= 0) {
        this->_money = money;
    }
    else std::cout << "Неверное значение" << std::endl;
}

int Machine::getMoney() {
    return _money;
}


void Machine::addSlot(Slot* slot) {
    this->_quantity++;
    if (slot->getQuantity() == 0) {
        this->_emptySlots++;
    }
    cout << "Слот добавлен" << endl;
}

void Machine::display() {
    cout << "Количество слотов " << _quantity << endl;
    cout << "Количество пустых слотов " << _emptySlots << endl;
    cout << "Сумма денег в машине " << _money << endl;
}
