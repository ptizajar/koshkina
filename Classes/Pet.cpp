#include "Pet.h"
#include "myenum.h"
#include <fstream>
Pet::Pet() {
	setName("undefined");
	setSpecies("undefined");
	setColor("undefined");
	setAge(0);
	setWeight(0);
	this->_owner = "undefined";
}

Pet::Pet(std::string name, std::string species, std::string color, int age, double weight, std::string owner) :IAnimal(name, species, color, age, weight), _owner(age::correctAlpha(owner)) {}
Pet::Pet(std::string name, std::string species, std::string color, int age, double weight) : IAnimal(name, species, color, age, weight), _owner("undefined") {}
Pet::Pet(std::string name, std::string species, std::string color, int age) : IAnimal(name, species, color, age, 0), _owner("undefined") {}
Pet::Pet(std::string name, std::string species, std::string color) : IAnimal(name, species, color, 0, 0), _owner("undefined") {}
Pet::Pet(std::string name, std::string species) : IAnimal(name, species, "undefined", 0, 0), _owner("undefined") {}
Pet::Pet(std::string owner) :_owner(age::correctAlpha(owner)) {}
Pet::~Pet() {};

Pet& Pet::operator++() {
    setWeight(getWeight() + 52);
    return *this;
}

Pet& Pet::operator--() {
    if (getWeight() > 52) {
        setWeight(getWeight() - 52);
        return *this;
    }

    else std::cout << "Volume is to small" << std::endl;
}

Pet Pet::operator++(int) {
    Pet t(*this);
    ++(*this);
    return t;
}

Pet Pet::operator--(int) {
    Pet t(*this);
    --(*this);
    return t;
}

bool Pet::operator<(Pet other) {
    return this->getWeight() < other.getWeight();
}

bool Pet::operator>(Pet other) {
    return this->getWeight() > other.getWeight();
}

std::ostream& operator<<(std::ostream& output, Pet t) {
    output << "Name: " << t.getName() << std::endl
        << "Species: " << t.getSpecies() << std::endl
        << "Color: " << t.getColor() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl;
    return output;
}


void Pet::setOwner(std::string owner) {
	this->_owner = age::correctAlpha(owner);
}

std::string Pet::getOwner() {
	return _owner;
}
void Pet::displayAnimal() {
	IAnimal::displayAnimal();
	std::cout << "Owner: " << _owner << std::endl;
}
void Pet::writeToFile() {
    std::ofstream out;
    out.open("Animal.txt", std::ios::app);
    if (out.is_open()) {
        out << "Animal name: " << getName() << std::endl
            << "Animal species: " << getSpecies() << std::endl
            << "Animal color: " << getColor() << std::endl
            << "Animal age: " << getAge() << std::endl
            << "Animal weight: " << getWeight() << std::endl
            << "Animal owner: " << getOwner() << std::endl;
    }
    out.close();

}