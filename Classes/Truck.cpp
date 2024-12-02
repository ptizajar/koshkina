#include "Truck.h"
#include "myenum.h"
Truck::Truck() {
	setBrand("undefined");
	setColor("undefined");
	setType("undefined");
	setVolume(0);
	setMileage(0);
	this->_goods = "undefined";
}

Truck::Truck(std::string brand, std::string color, std::string type, float volume, int mileage, std::string goods) :Car(brand, color, type, volume, mileage), _goods(age::correctAlpha(goods)) {}
Truck::Truck(std::string brand, std::string color, std::string type, float volume, int mileage) : Car(brand, color, type, volume, mileage), _goods("undefined") {}
Truck::Truck(std::string brand, std::string color, std::string type, float volume) : Car(brand, color, type, volume, 0), _goods("undefined") {}
Truck::Truck(std::string brand, std::string color, std::string type) : Car(brand, color, type, 0, 0), _goods("undefined") {}
Truck::Truck(std::string brand, std::string color) : Car(brand, color, "undefined", 0, 0), _goods("undefined") {}
Truck::Truck(std::string brand) : Car(brand, "undefined", "undefined", 0, 0), _goods("undefined") {}

void Truck::setGoods(std::string goods) {
	this->_goods = age::correctAlpha(goods);
}

std::string Truck::getGoods() {
	return _goods;
}
void Truck::displayTruck() {
	Car::display();
	std::cout << "Goods: " << _goods << std::endl;
}