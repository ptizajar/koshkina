#include "Library.h"
#include "Employee.h"
#include "Bookcase.h"
Library::Library() {
    this->_bookcases = nullptr;
    this->_quantityBookcases = 0;
    this->_stuff = nullptr;
    this->_quantityStuff = 0;
    this->_clients = nullptr;
    this->_quantityClients = 0;
}

Library::Library(Bookcase** bookcases, int quantityBookcases, Employee** stuff, int quantityStuff, Client** clients, int quantityClients) : _bookcases(bookcases), _quantityBookcases(quantityBookcases), _stuff(stuff),_quantityStuff(quantityStuff),_clients(clients),_quantityClients(quantityClients) {}
Library::~Library() {};

Bookcase** Library::getBookcases() {
    return _bookcases;
}
void Library::setQuantityBookcases(int quantityBookcases) {
    if (quantityBookcases >= 0) {
        this->_quantityBookcases = quantityBookcases;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Library::getQuantityBookcases() {
    return _quantityBookcases;
}
Employee** Library::getStuff() {
    return _stuff;
}
Client** Library::getClients() {
    return _clients;
}

void Library::give(IPrint* print, Client* client) {
    if ((print->getAgeLimit()) <= (client->getAge())) {
        for (int i = 0; i < _quantityBookcases; i++) {
            if (_bookcases[i]->remove(print)) {
                client->append(print);
                return;
           }
        }
        std::cout << "No such book" << std::endl;
        
    }
    else {
        std::cout << "This client is too young"<<std::endl;
    }
}

void Library::turnBack(IPrint* print, Client* client) {
    if (client->remove(print)) {
        _bookcases[0]->append(print);
    }
    return;
}


/*void Library::displayLibrary() {
    if (_bookcases == nullptr) {
        std::cout << "No printings here" << std::endl;
    }
    else {
        std::cout << "Bookcases: " << std::endl;
        for (int i = 0; i < _quantityBookcases; i++) {
            std::cout << "Bookcase " << i + 1 << std::endl;
            if (_bookcases[i]->getAvailable() == nullptr) {
                std::cout << "Nothing here" << std::endl;
            }
            else {
                std::cout << "Printings: " << std::endl;
                for (int j = 0; j < _bookcases[i]->getQuantityAvailable(); j++) {
                    std::cout << _bookcases[i]->getAvailable()[j]->getTitle() << std::endl;
                }
                std::cout << "Printing quantity: " << _bookcases[i]->getQuantityAvailable() << std::endl;
            }
        }
        std::cout << "Bookcases quantity: " << _quantityBookcases << std::endl;
    }

    if (_stuff == nullptr) {
        std::cout << "No one works here" << std::endl;
    }
    else {
        for (int i = 0; i < _quantityStuff; i++) {
            std::cout << "Name " << _stuff[i]->getName() << std::endl;
            std::cout << "Surname " << _stuff[i]->getSurname() << std::endl;
            std::cout << "Age " << _stuff[i]->getAge() << std::endl;
            std::cout << "Post: " << _stuff[i]->getPost() << std::endl;
        }
    }

    if (_clients == nullptr) {
        std::cout << "No one comes here" <<std::endl;
    }
    else {
        for (int i = 0; i < _quantityClients; i++) {

        }
    }
}*/
