#include "Client.h"

Client::Client() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    this->_taken = nullptr;
    this->_quantity = 0;
}

Client::Client(std::string name, std::string surname, int age,IEvent** taken,int quantity) :IPerson(name, surname, age),  _taken(taken),_quantity(quantity) {}
Client::~Client() {};

void Client::setQuantity(int quantity) {
    if (quantity >= 0) {
        this->_quantity = quantity;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Client::getQuantity() {
    return _quantity;
}

IEvent** Client::getTaken() {
    return _taken;
}


void Client::append(IEvent* ticket) {
    if (this->_taken == nullptr) {
        this->_taken = new IEvent * [1]{ ticket };
        this->_quantity++;
    }
    else {
        IEvent** p = new IEvent * [(this->_quantity) + 1];
        for (int i = 0; i < this->_quantity; i++) {
            p[i] = this->_taken[i];
        }
        p[this->_quantity] = ticket;
        delete[] this->_taken;
        this->_taken = p;
        this->_quantity++;

    }

}

void Client::displayPerson() {
    IPerson::displayPerson();
    if (_taken == nullptr) {
        std::cout << "No tickets" << std::endl;
    }
    else {
        std::cout << "Tickets: " << std::endl;
        for (int i = 0; i < _quantity; i++) {
            std::cout << _taken[i]->getTitle() << std::endl;
        }
        std::cout << "Tickets quantity: " << getQuantity() << std::endl;
    }
}
