#include "Visitor.h"

Visitor::Visitor() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    this->_id = "undefined";
}

Visitor::Visitor(std::string name, std::string surname, int age, std::string id) :IPerson(name, surname, age), _id(id) {}
Visitor::Visitor(std::string id) : _id(id) {}
Visitor::~Visitor() {};


void Visitor::setId(std::string id) {
    this->_id = id;
}

std::string Visitor::getId() {
    return _id;
}
void Visitor::displayPerson() {
    IPerson::displayPerson();
    std::cout << "id: " << _id << std::endl;
}
