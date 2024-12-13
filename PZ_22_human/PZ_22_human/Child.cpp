#include "Child.h"
#include "enum.h"
#include <fstream>
Child::Child() {
	setName("undefined");
	setSurname("undefined");
	setAge(0);
	setWeight(0);
	setHeight(0);
	this->_school = "undefined";
}

Child::Child(std::string name, std::string surname, int age, int weight, int height, std::string school) :Human(name, surname, age, weight, height), _school(age::correctAlpha(school)) {}
Child::Child(std::string school) : _school(age::correctAlpha(school)) {}

void Child::setSchool(std::string school) {
	this->_school = age::correctAlpha(school);
}

std::string Child::getSchool() {
	return _school;
}

Child Child::operator++() {
    this->setHeight(this->getHeight() + 10);
    return *this;
}

Child Child::operator--() {
    if (this->getHeight() > 10) {
        this->setHeight(this->getHeight() - 10);
        return *this;
    }

    else std::cout << "Height is to small" << std::endl;
    return *this;
}

Child Child::operator++(int) {
    Child t(*this);
    ++(*this);
    return t;
}

Child Child::operator--(int) {
    Child t(*this);
    --(*this);
    return t;
}

bool Child::operator<(Child other) {
    return this->getHeight() < other.getHeight();
}

bool Child::operator>(Child other) {
    return this->getHeight() > other.getHeight();
}

std::ostream& operator<<(std::ostream& output, Child t) {
    output << "Name: " << t.getName() << std::endl
        << "Surname: " << t.getSurname() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl
        << "Height: " << t.getHeight() << std::endl
        << "School: " << t._school << std::endl;
    return output;
}

void Child::display() {
	Human::display();
	std::cout << "School: " << _school << std::endl;
}

void Child::read() {
    Human::read();
    std::cout << "Enter school ";
    std::string humanSchool;
    std::cin >> humanSchool;
    setSchool(humanSchool);

}

void Child::writeToFile() {
    std::ofstream out;
    out.open("Human.txt", std::ios::app);
    if (out.is_open()) {
        out << "Name: " << getName() << std::endl
            << "Surname: " << getSurname() << std::endl
            << "Age: " << getAge() << std::endl
            << "Weight: " << getWeight() << std::endl
            << "Height: " << getHeight() << std::endl
            << "School: " << getSchool() << std::endl;
    }
    out.close();

}