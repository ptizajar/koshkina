#pragma once
#include "IPerson.h"
class Employee :  public IPerson {
public:
	Employee();
	Employee(std::string name, std::string surname, int age, std::string post);
	~Employee();
	void setPost(std::string post);
	std::string getPost();
	void displayPerson();
private:
	std::string _post;
};



