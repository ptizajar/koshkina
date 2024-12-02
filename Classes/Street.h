#pragma once
#include "IAnimal.h"
#include "Wild.h"
#include "Pet.h"
class Street : public Wild, Pet
{
public:
	Street(std::string name, std::string species, std::string color, int age, double weight, std::string area, std::string owner, bool lice);
	Street();
	~Street();
	void setLice(bool lice);
	bool getLice();
	Street& operator++();
	Street& operator--();
	bool operator<(Street other);
	bool operator>(Street other);
	friend std::ostream& operator<<(std::ostream& output, Street t);
	void displayAnimal();
	void read();
	void writeToFile();
private:
	bool _lice;
	
};