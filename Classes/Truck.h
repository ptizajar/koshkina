#pragma once
#include "Car.h"
class Truck :public Car {
public:
	Truck();
	Truck(std::string brand, std::string color, std::string type, float volume, int mileage,std::string goods);
	Truck(std::string brand, std::string color, std::string type, float volume, int mileage);
	Truck(std::string brand, std::string color, std::string type, float volume);
	Truck(std::string brand, std::string color, std::string type);
	Truck(std::string brand, std::string color);
	Truck(std::string brand);
	void setGoods(std::string goods);
	std::string getGoods();
	void displayTruck();
private:
	std::string _goods;
};

