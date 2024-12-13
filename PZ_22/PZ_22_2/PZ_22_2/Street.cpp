#include "Street.h"
#include <fstream>
Street::Street(std::string name, std::string species, std::string color, int age, double weight, std::string area, std::string owner, bool lice) :IAnimal(name, species, color, age, weight), Wild(area), Pet(owner), _lice(lice) {};
Street::Street() :Street("undefined", "undefined", "undefined", 0, 0, "undefined", "undefined", true) {};
Street::~Street() {};
void Street::setLice(bool lice) { this->_lice = lice; }
bool Street::getLice() { return _lice; }
Street& Street::operator++() {
    setWeight(getWeight() + 52);
    return *this;
}

Street& Street::operator--() {
    if (getWeight() > 52) {
        setWeight(getWeight() - 52);
        return *this;
    }

    else std::cout << "Weight is to small" << std::endl;
}


bool Street::operator<(Street other) {
    return this->getWeight() < other.getWeight();
}

bool Street::operator>(Street other) {
    return this->getWeight() > other.getWeight();
}

std::ostream& operator<<(std::ostream& output, Street t) {
    output << "Name: " << t.getName() << std::endl
        << "Species: " << t.getSpecies() << std::endl
        << "Color: " << t.getColor() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl;
    return output;
}

void Street::read() {
    IAnimal::read();
    std::cout << "Enter animal area: ";
    std::string animalArea;
    std::cin >> animalArea;
    setArea(animalArea);
    std::cout << "Enter animal owner: ";
    std::string animalOwner;
    std::cin >> animalOwner;
    setOwner(animalOwner);
    std::cout << "Enter getting lice: ";
    bool animalLice;
    std::cin >> animalLice;
    setLice(animalLice);
}
void Street::displayAnimal() {
    IAnimal::displayAnimal();
    std::cout << "Animal area: " << getArea() << std::endl
        << "Animal owner: " << getOwner() << std::endl
        << "Getting lice: " << getLice() << std::endl;
}
void Street::writeToFile() {
    std::ofstream out;
    out.open("Animal.txt", std::ios::app);
    if (out.is_open()) {
        out << "Animal name: " << getName() << std::endl
            << "Animal species: " << getSpecies() << std::endl
            << "Animal color: " << getColor() << std::endl
            << "Animal age: " << getAge() << std::endl
            << "Animal weight: " << getWeight() << std::endl
            << "Animal area: " << getArea() << std::endl
            << "Animal owner: " << getOwner() << std::endl
            << "Getting lice: " << _lice << std::endl;
    }
    out.close();

}