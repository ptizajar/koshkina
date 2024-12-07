#pragma once
#include "IPerson.h"
class IEmployee :virtual public IPerson {
public:
	IEmployee();
	IEmployee(std::string name, std::string surname, int experience);
	IEmployee(int experience);
	~IEmployee();
	void setExperience(int experience);
	int getExperience();
	void displayPerson() = 0;
private:
	int _experience;
};






