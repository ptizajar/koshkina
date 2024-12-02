#pragma once
#include "IEmployee.h"
class Musician :public IEmployee {
public:
	Musician();
	Musician(std::string name, std::string surname, int age, int experience, std::string instrument);
	~Musician();
	void setInstrument(std::string instrument);
	std::string getInstrument();
	void displayPerson();
private:
	std::string _instrument;
};




