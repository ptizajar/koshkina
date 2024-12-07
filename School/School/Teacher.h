#pragma once
#include "IEmployee.h"
class Teacher :public IEmployee {
public:
	Teacher();
	Teacher(std::string name, std::string surname, int experience, std::string speciality);
	~Teacher();
	void setSpeciality(std::string speciality);
	std::string getSpeciality();
	void displayPerson();
private:
	std::string _speciality;
};





