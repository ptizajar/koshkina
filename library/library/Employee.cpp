#include "Employee.h"

Employee::Employee() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    this->_post = "undefined";
}

Employee::Employee(std::string name, std::string surname, int age, std::string post) :IPerson(name, surname, age), _post(post) {}
Employee::~Employee() {};


void Employee::setPost(std::string post) {
    this->_post = post;
}

std::string Employee::getPost() {
    return _post;
}
void Employee::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Post: " << _post << std::endl;
}
