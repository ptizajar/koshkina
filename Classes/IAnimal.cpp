#include <iostream>
#include "IAnimal.h"
using namespace age;
using namespace std;




void IAnimal::newWeight(int days) {
    _weight += _weight * 0.01 * days;
    cout << "New weight " << _weight << endl;
}

void IAnimal::newName(std::string newName) {
    _name = newName;
    cout << "New name " << _name << endl;
}


void IAnimal::displayAnimal() {
    cout << endl << "Name " << _name << endl;
    cout << "Species " << _species << endl;
    cout << "Color " << _color << endl;
    cout << "Age " << _age << endl;
    cout << "Weight " << _weight << endl;
}


IAnimal::IAnimal() {
    this->_name = "undefined";
    this->_species = "undefined";
    this->_color = "undefined";
    this->_age= 0;
    this->_weight = 0;
}

IAnimal::IAnimal(std::string name, std::string species, std::string color, int age, double weight):_name(correctAlpha(name)),_species(correctAlpha(species)),_color(correctAlpha(color)),_age(correctCount(age)),_weight(correctCount(weight)) {}

IAnimal::IAnimal(std::string name, std::string species, std::string color, int age): IAnimal(name, species, color, age, 0) {}
IAnimal::IAnimal(std::string name, std::string species, std::string color) : IAnimal(name, species, color, 0, 0) {}
IAnimal::IAnimal(std::string name, std::string species) : IAnimal(name, species, "undefined", 0, 0) {}
IAnimal::IAnimal(std::string name) : IAnimal(name, "undefined", "undefined", 0, 0) {}
IAnimal::~IAnimal() {}


void IAnimal::setName(std::string name) {
    this->_name = name;
}

std::string IAnimal::getName() {
    return _name;
}
void IAnimal::setColor(std::string color) {
    this->_color = color;
}

std::string IAnimal::getColor() {
    return _color;
}

void IAnimal::setSpecies(std::string species) {
    this->_species = species;
}

std::string IAnimal::getSpecies() {
    return _species;
}

void IAnimal::setWeight(double weight) {
    if (weight > 0) this->_weight = weight;
    else cout << "Wrong value" << endl;
}

double IAnimal::getWeight() {
    return _weight;
}

void IAnimal::setAge(int age) {
    if (age > 0) this->_age = age;
    else cout << "Wrong value" << endl;

}

int IAnimal::getAge() {
    return _age;
}
void IAnimal::read() {
    std::cout << "Enter animal name: ";
    std::string animalName;
    std::cin >> animalName;
    setName(animalName);
    std::cout << "Enter animal species: ";
    std::string animalSpecies;
    std::cin >> animalSpecies;
    setSpecies(animalSpecies);
    std::cout << "Enter animal color: ";
    std::string animalColor;
    std::cin >> animalColor;
    setColor(animalColor);
    std::cout << "Enter animal age: ";
    int animalAge;
    std::cin >> animalAge;
    setAge(animalAge);
    std::cout << "Enter animal weight: ";
    double animalWeight;
    std::cin >> animalWeight;
    setWeight(animalWeight);
}
void IAnimal::writeToFile() {}
