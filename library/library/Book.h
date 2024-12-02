#pragma once
#include "IPrint.h"
class Book : virtual public IPrint {
public:
	Book();
	Book(std::string title, int ageLimit,std::string genre);
	Book(std::string genre);
	~Book();
	void setGenre(std::string genre);
	std::string getGenre();
	void displayPrint();
private:
	std::string _genre;
};




