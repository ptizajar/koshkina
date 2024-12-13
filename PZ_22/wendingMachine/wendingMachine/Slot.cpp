#include "Slot.h"

Slot::Slot() {
    this->_snacks = nullptr;
    this->_quantitySnacks = 0;
}

Slot::Slot(Snack** snacks, int quantitySnacks) : _snacks(snacks), _quantitySnacks(quantitySnacks) {}
Slot::~Slot() {};


void Slot::setQuantitySnacks(int quantitysnacks) {
    if (quantitysnacks >= 0) {
        this->_quantitySnacks = quantitysnacks;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Slot::getQuantitySnacks() {
    return _quantitySnacks;
}

void Slot::setSnacks(Snack** snacks) {
    this->_snacks = snacks;
}

bool Slot::remove(Snack* snack) {
    if (this->_snacks == nullptr) {
        return false;
    }
    else {
        int indBack = -1;
        for (int i = 0; i < this->_quantitySnacks; i++) {
            if (this->_snacks[i]->getName() == snack->getName()) {
                indBack = i;
                break;
            }
        }
        if (indBack == -1) {
            return false;
        }
        else {
            Snack** p = new Snack * [(this->_quantitySnacks) - 1];
            int newI = 0;
            for (int i = 0; i < this->_quantitySnacks; i++) {
                if (i != indBack) {
                    p[newI++] = this->_snacks[i];
                }
            }
            this->_snacks = p;
            this->_quantitySnacks--;
            return true;
        }
    }
}

Snack** Slot::getSnacks() {
    return _snacks;
}

void Slot::display() {
    if (_snacks == nullptr) {
        std::cout << "Nothing here" << std::endl;
    }
    else {
        std::cout << "Snacks: " << std::endl;
        for (int i = 0; i < _quantitySnacks; i++) {
            std::cout << _snacks[i]->getName() << std::endl;
        }
        std::cout << "Snacks quantity: " << getQuantitySnacks() << std::endl;
    }
}
