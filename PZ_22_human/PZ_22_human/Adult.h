#pragma once
#include "Adult.h"
class Adult :virtual public Human {
public:
	Adult();
	Adult(std::string name, std::string surname, int age, int weight, int height, std::string job);
	Adult(std::string job);
	void setJob(std::string job);
	std::string getJob();
	Adult operator++();
	Adult operator--();
	Adult operator++(int);
	Adult operator--(int);
	bool operator<(Adult other);
	bool operator>(Adult other);
	friend std::ostream& operator<<(std::ostream& output, Adult t);

	virtual void display();
	void writeToFile();
	void read();
private:
	std::string _job;
};

