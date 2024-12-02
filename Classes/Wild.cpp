#include "Wild.h"
#include "myenum.h"
#include <fstream>
Wild::Wild() {
	setName("undefined");
	setSpecies("undefined");
	setColor("undefined");
	setAge(0);
	setWeight(0);
	this->_area = "undefined";
}

Wild::Wild(std::string name, std::string species, std::string color, int age, double weight, std::string area) :IAnimal(name, species, color, age, weight), _area(age::correctAlpha(area)) {}
Wild::Wild(std::string name, std::string species, std::string color, int age, double weight) : IAnimal(name, species, color, age, weight),_area("undefined") {}
Wild::Wild(std::string name, std::string species, std::string color, int age) : IAnimal(name, species, color, age, 0), _area("undefined") {}
Wild::Wild(std::string name, std::string species, std::string color): IAnimal(name, species, color, 0, 0), _area("undefined") {}
Wild::Wild(std::string name, std::string species) : IAnimal(name, species, "undefined", 0, 0), _area("undefined") {}
Wild::Wild(std::string area) : _area(age::correctAlpha(area)) {}

Wild::~Wild() {};

Wild& Wild::operator++() {
    setWeight(getWeight() + 52);
    return *this;
}

Wild& Wild::operator--() {
    if (getWeight() > 52) {
        setWeight(getWeight() - 52);
        return *this;
    }

    else std::cout << "Volume is to small" << std::endl;
}

Wild Wild::operator++(int) {
    Wild t(*this);
    ++(*this);
    return t;
}

Wild Wild::operator--(int) {
    Wild t(*this);
    --(*this);
    return t;
}

bool Wild::operator<(Wild other) {
    return this->getWeight() < other.getWeight();
}

bool Wild::operator>(Wild other) {
    return this->getWeight() > other.getWeight();
}

std::ostream& operator<<(std::ostream& output, Wild t) {
    output << "Name: " << t.getName() << std::endl
        << "Species: " << t.getSpecies() << std::endl
        << "Color: " << t.getColor() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl;
    return output;
}

void Wild::setArea(std::string area) {
	this->_area = age::correctAlpha(area);
}

std::string Wild::getArea() {
	return _area;
}
void Wild::displayAnimal() {
	IAnimal::displayAnimal();
	std::cout << "Area: " << _area << std::endl;
}
void Wild::writeToFile() {
    std::ofstream out;
    out.open("Animal.txt", std::ios::app);
    if (out.is_open()) {
        out << "Animal name: " << getName() << std::endl
            << "Animal species: " << getSpecies() << std::endl
            << "Animal color: " << getColor() << std::endl
            << "Animal age: " << getAge() << std::endl
            << "Animal weight: " << getWeight() << std::endl
            << "Animal area: " << getArea() << std::endl;
    }
    out.close();

}