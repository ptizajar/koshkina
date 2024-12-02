#include "Bookcase.h"

Bookcase::Bookcase() {
    this->_available = nullptr;
    this->_quantityAvailable = 0;
}

Bookcase::Bookcase(IPrint** available, int quantityAvailable) : _available(available), _quantityAvailable(quantityAvailable) {}
Bookcase::~Bookcase() {};


void Bookcase::setQuantityAvailable(int quantityAvailable) {
    if (quantityAvailable >= 0) {
        this->_quantityAvailable = quantityAvailable;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Bookcase::getQuantityAvailable() {
    return _quantityAvailable;
}

void Bookcase::append(IPrint* print) {
    if (this->_available == nullptr) {
        this->_available = new IPrint * [1]{ print };
        this->_quantityAvailable++;
    }
    else {
        IPrint** p = new IPrint * [this->_quantityAvailable+1];
        for (int i = 0; i < this->_quantityAvailable; i++) {
            p[i] = this->_available[i];
        }
        p[this->_quantityAvailable] = print;
        delete[] this->_available;
        this->_available = p;
        this->_quantityAvailable++;

    }
}


bool Bookcase::remove(IPrint* print) {
    if (this->_available == nullptr) {
        return false;
    }
    else {
        int indBack = -1;
        for (int i = 0; i < this->_quantityAvailable; i++) {
            if (this->_available[i]->getTitle() == print->getTitle()) {
                indBack = i;
                break;
            }
        }
        if (indBack == -1) {
            return false;
        }
        else {
            IPrint** p = new IPrint * [(this->_quantityAvailable) - 1];
            int newI = 0;
            for (int i = 0; i < this->_quantityAvailable; i++) {
                if (i != indBack) {
                    p[newI++] = this->_available[i];
                }
            }
            this->_available = p;
            this->_quantityAvailable--;
            return true;
        }
    }
}

IPrint** Bookcase::getAvailable() {
    return _available;
}

void Bookcase::displayBookcase() {
    if (_available == nullptr) {
        std::cout << "Nothing here" << std::endl;
    }
    else {
        std::cout << "Printings: " << std::endl;
        for (int i = 0; i < _quantityAvailable; i++) {
            std::cout << _available[i]->getTitle() << std::endl;
        }
        std::cout << "Printing quantity: " << getQuantityAvailable() << std::endl;
    }
}
