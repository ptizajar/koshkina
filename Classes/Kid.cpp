#include "Kid.h"
#include "myenum.h"
Kid::Kid() {
	setName("undefined");
	setSurname("undefined");
	setAge(0);
	setWeight(0);
	setHeight(0);
	this->_school = "undefined";
}

Kid::Kid(std::string name, std::string surname, int age, int weight, int height, std::string school) :Human(name, surname, age, weight, height), _school(age::correctAlpha(school)) {}
Kid::Kid(std::string name, std::string surname, int age, int weight, int height) : Human(name, surname, age, weight, height), _school("undefined") {}
Kid::Kid(std::string name, std::string surname, int age, int weight) : Human(name, surname, age, weight, 0), _school("undefined") {}
Kid::Kid(std::string name, std::string surname, int age) : Human(name, surname, age, 0, 0), _school("undefined") {}
Kid::Kid(std::string name, std::string surname) : Human(name, surname, 0, 0, 0), _school("undefined") {}
Kid::Kid(std::string name) : Human(name, "undefined", 0, 0, 0), _school("undefined") {}

void Kid::setSchool(std::string school) {
	this->_school = age::correctAlpha(school);
}

std::string Kid::getSchool() {
	return _school;
}
void Kid::displayKid() {
	Human::display();
	std::cout << "School: " << _school << std::endl;
}