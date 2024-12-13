#pragma once
#include "IAnimal.h"
class Wild :virtual public IAnimal {
public:
	Wild();
	Wild(std::string name, std::string species, std::string color, int age, double weight, std::string area);
	Wild(std::string name, std::string species, std::string color, int age, double weight);
	Wild(std::string name, std::string species, std::string color, int age);
	Wild(std::string name, std::string species, std::string color);
	Wild(std::string name, std::string species);
	Wild(std::string area);
	~Wild();
	Wild& operator++();
	Wild& operator--();
	Wild operator++(int);
	Wild operator--(int);
	bool operator<(Wild other);
	bool operator>(Wild other);
	friend std::ostream& operator<<(std::ostream& output, Wild t);
	void setArea(std::string area);
	std::string getArea();
	void displayAnimal();
	void writeToFile();
	void read();

private:
	std::string _area;
};


