#include "School.h"
#include "IEmployee.h"
#include "Class.h"
School::School() {
    this->_classes = nullptr;
    this->_quantityClasses = 0;
    this->_employees = nullptr;
    this->_quantityEmployees = 0;
}

School::School(Class** classes, int quantityClasses, IEmployee** employees, int quantityEmployees) : _classes(classes), _quantityClasses(quantityClasses), _employees(employees), _quantityEmployees(quantityEmployees) {}
School::~School() {};

void School::setClasses(Class** classes) {
    this->_classes = classes;
}

Class** School::getClasses() {
    return _classes;
}
void School::setQuantityClasses(int quantityClasses) {
    if (quantityClasses >= 0) {
        this->_quantityClasses = quantityClasses;
    }
    else std::cout << "Wrong value" << std::endl;
}

int School::getQuantityClasses() {
    return _quantityClasses;
}

void School::setEmployees(IEmployee** employees) {
    this->_employees = employees;
}

IEmployee** School::getEmployees() {
    return _employees;
}

void School::setQuantityEmployees(int quantityEmployees) {
    if (quantityEmployees > 0) {
        this->_quantityEmployees = quantityEmployees;
    }
    else std::cout << "Wrong value" << std::endl;
}

int School::getQuantityEmployees() {
    return _quantityEmployees;
}




