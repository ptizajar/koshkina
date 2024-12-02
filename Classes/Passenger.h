#pragma once
#include "Car.h"
class Passenger :public Car {
public:
	Passenger();
	Passenger(std::string brand, std::string color, std::string type, float volume, int mileage, std::string owner);
	Passenger(std::string brand, std::string color, std::string type, float volume, int mileage);
	Passenger(std::string brand, std::string color, std::string type, float volume);
	Passenger(std::string brand, std::string color, std::string type);
	Passenger(std::string brand, std::string color);
	Passenger(std::string brand);
	void setOwner(std::string owner);
	std::string getOwner();
	void displayPassenger();
private:
	std::string _owner;
};


