#include "Stuff.h"
#include "IPerson.h"

Stuff::Stuff() {
    setName("undefined");
    setSurname("undefined");
    setExperience(0);
    this->_post = "undefined";
}

Stuff::Stuff(std::string name, std::string surname, int experience, std::string post) :IPerson(name, surname), IEmployee(experience), _post(post) {}
Stuff::Stuff(int experience, std::string post) :IEmployee(experience), _post(post){}
Stuff::~Stuff() {};


void Stuff::setPost(std::string post) {
    this->_post = post;
}

std::string Stuff::getPost() {
    return _post;
}
void Stuff::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Experience: " << getExperience() << std::endl;
    std::cout << "Post: " << _post << std::endl;
}
