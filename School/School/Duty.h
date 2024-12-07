#pragma once
#include "IPerson.h"
#include "Pupil.h"
#include "Stuff.h"
class Duty : public Stuff, Pupil {
public:
	Duty();
	Duty(std::string name, std::string surname, int course, int experience, std::string post);
	~Duty();
	void displayPerson();
};






