#include "Musician.h"
#include "IPerson.h"

Musician::Musician() {
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    setExperience(0);
    this->_instrument = "undefined";
}

Musician::Musician(std::string name, std::string surname, int age, int experience, std::string instrument) :IPerson(name, surname, age), IEmployee(experience), _instrument(instrument) {}
Musician::~Musician() {};


void Musician::setInstrument(std::string instrument) {
      this->_instrument = instrument;
}

std::string Musician::getInstrument() {
    return _instrument;
}
void Musician::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Experience: " << getExperience() << std::endl;
    std::cout << "Instrument: " << _instrument << std::endl;
}
