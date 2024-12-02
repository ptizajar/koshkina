#pragma once
#include "IPrint.h"
class Newspaper : virtual public IPrint {
public:
	Newspaper();
	Newspaper(std::string title, int ageLimit, std::string publication);
	Newspaper(std::string publication);
	~Newspaper();
	void setPublication(std::string publication);
	std::string getPublication();
	void displayPrint();
private:
	std::string _publication;
};





