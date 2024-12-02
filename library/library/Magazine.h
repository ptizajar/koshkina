#pragma once
#include "IPrint.h"
#include "Newspaper.h"
#include "Book.h"
class Magazine : public Book,Newspaper {
public:
	Magazine();
	Magazine(std::string title, int ageLimit, std::string genre,std::string publication);
	~Magazine();
	void displayPrint();
};






