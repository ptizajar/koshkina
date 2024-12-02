#include "Client.h"

Client::Client() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    setId( "undefined");
    this->_taken = nullptr;
    this->_quantity = 0;
}

Client::Client(std::string name, std::string surname, int age, std::string id,IPrint** taken,int quantity) :IPerson(name, surname, age), Visitor(id), _taken(taken),_quantity(quantity) {}
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

void Client::append(IPrint *print) {
    if (this->_taken == nullptr) {
        this->_taken = new IPrint * [1]{print};
        this->_quantity++;
    }
    else{ 
        IPrint** p = new IPrint * [(this->_quantity)+1]; 
        for (int i = 0; i < this->_quantity; i++) {
            p[i]=this->_taken[i] ;
        }
        p[this->_quantity] = print;
        delete[] this->_taken;
        this->_taken = p;
        this->_quantity++;
        
    }
   
}

bool Client::remove(IPrint* print) {
    if (this->_taken == nullptr) {
        std::cout << "This client has nothing to turn back to the library" << std::endl;
        return false;
    }
    else {
        int indBack = -1;
        for (int i = 0; i < this->_quantity; i++) {
            if (this->_taken[i]->getTitle() == print->getTitle()) {
                indBack = i;
                break;
            }
        }
        if (indBack == -1) {
            std::cout << "This client doesn't have this printing" << std::endl;
            return false;
        }
        else {
            IPrint** p = new IPrint * [(this->_quantity) - 1];
            int newI = 0;
            for (int i = 0; i < this->_quantity; i++) {
                if (i != indBack) {
                    p[newI++] = this->_taken[i];
                }
            }
            this->_taken = p;
            this->_quantity--;
            return true;
        }
    }
}

IPrint** Client::getTaken() {
    return _taken;
}

void Client::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Id: " << getId() << std::endl;
    if (_taken == nullptr) {
        std::cout << "Nothing taken" << std::endl;
    }
    else {
        std::cout << "Taken printings: " << std::endl;
        for (int i = 0; i < _quantity; i++) {
            std::cout << _taken[i]->getTitle() << std::endl;
        }
        std::cout << "Printing quantity: " << getQuantity() << std::endl;
    }
}
