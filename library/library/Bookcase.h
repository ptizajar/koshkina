#pragma once
#include "IPrint.h"
class Bookcase {
public:
	Bookcase();
	Bookcase(IPrint** available, int quantityAvailable);
	~Bookcase();
	IPrint** getAvailable();
	void append(IPrint* print);
	bool remove(IPrint* print);
	void setQuantityAvailable(int quantityAvailable);
	int getQuantityAvailable();
	void displayBookcase();
private:
	IPrint** _available;
	int _quantityAvailable;
};





