#pragma once
#include "IPerson.h"
class Pupil :virtual public IPerson {
public:
	Pupil();
	Pupil(std::string name, std::string surname, int course);
	Pupil(int course);
	~Pupil();
	void setCourse(int course);
	int getCourse();
	void displayPerson();
private:
	int _course;
};





