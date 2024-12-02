#include "Passenger.h"
#include "myenum.h"
Passenger::Passenger() {
	setBrand("undefined");
	setColor("undefined");
	setType("undefined");
	setVolume(0);
	setMileage(0);
	this->_owner = "undefined";
}

Passenger::Passenger(std::string brand, std::string color, std::string type, float volume, int mileage, std::string owner) :Car(brand, color, type, volume, mileage), _owner(age::correctAlpha(owner)) {}
Passenger::Passenger(std::string brand, std::string color, std::string type, float volume, int mileage) : Car(brand, color, type, volume, mileage), _owner("undefined") {}
Passenger::Passenger(std::string brand, std::string color, std::string type, float volume) : Car(brand, color, type, volume, 0), _owner("undefined") {}
Passenger::Passenger(std::string brand, std::string color, std::string type) : Car(brand, color, type, 0, 0), _owner("undefined") {}
Passenger::Passenger(std::string brand, std::string color) : Car(brand, color, "undefined", 0, 0), _owner("undefined") {}
Passenger::Passenger(std::string brand) : Car(brand, "undefined", "undefined", 0, 0), _owner("undefined") {}

void Passenger::setOwner(std::string owner) {
	this->_owner = age::correctAlpha(owner);
}

std::string Passenger::getOwner() {
	return _owner;
}
void Passenger::displayPassenger() {
	Car::display();
	std::cout << "Owner: " << _owner << std::endl;
}