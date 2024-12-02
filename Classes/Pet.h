#pragma once
#include "IAnimal.h"
class Pet :virtual public IAnimal {
public:
	Pet();
	Pet(std::string name, std::string species, std::string color, int age, double weight, std::string owner);
	Pet(std::string name, std::string species, std::string color, int age, double weight);
	Pet(std::string name, std::string species, std::string color, int age);
	Pet(std::string name, std::string species, std::string color);
	Pet(std::string name, std::string species);
	Pet(std::string owner);
	~Pet();
	Pet& operator++();
	Pet& operator--();
	Pet operator++(int);
	Pet operator--(int);
	bool operator<(Pet other);
	bool operator>(Pet other);
	friend std::ostream& operator<<(std::ostream& output, Pet t);
	void setOwner(std::string owner);
	std::string getOwner();
	void displayAnimal();
	void writeToFile();
private:
	std::string _owner;
};



