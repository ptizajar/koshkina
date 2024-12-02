#pragma once
#include "IPerson.h"
class Visitor :virtual public IPerson {
public:
	Visitor();
	Visitor(std::string name, std::string surname, int age, std::string id);
	Visitor(std::string id);
	~Visitor();
	void setId(std::string id);
	std::string getId();
	void displayPerson();
private:
	std::string _id;
};



