#include "Cashier.h"
#include "IPerson.h"

Cashier::Cashier() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    setExperience(0);
    this->_cashbox = 0;
}

Cashier::Cashier(std::string name, std::string surname, int age, int experience,int cashbox) :IPerson(name, surname, age), IEmployee(experience),_cashbox(cashbox) {}
Cashier::~Cashier() {};


void Cashier::setCashbox(int cashbox) {
    if (cashbox >= 0) {
        this->_cashbox = cashbox;
    }
    else {
        std::cout << "Wrong value" << std::endl;
    }
}

int Cashier::getCashbox() {
    return _cashbox;
}
void Cashier::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Experience: " << getExperience() << std::endl;
    std::cout << "Cashbox number: " << _cashbox << std::endl;
}
