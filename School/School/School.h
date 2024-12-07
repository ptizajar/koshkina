#pragma once
#include "Class.h"
#include "IEmployee.h"

class School {
public:
	School();
	School(Class** classes, int quantityClasses, IEmployee** employees, int quantityEmployees);
	~School();
	void setClasses(Class** classes);
	Class** getClasses();
	void setQuantityClasses(int quantityClasses);
	int getQuantityClasses();
	void setEmployees(IEmployee** employees);
	IEmployee** getEmployees();
	void setQuantityEmployees(int quantityEmployees);
	int getQuantityEmployees();
private:
	Class** _classes;
	int _quantityClasses;
	IEmployee** _employees;
	int _quantityEmployees;
};





