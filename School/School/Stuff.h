#pragma once
#include "IEmployee.h"
class Stuff :virtual public IEmployee {
public:
	Stuff();
	Stuff(std::string name, std::string surname, int experience, std::string post);
	Stuff(int experience, std::string post);
	~Stuff();
	void setPost(std::string post);
	std::string getPost();
	void displayPerson();
private:
	std::string _post;
};





