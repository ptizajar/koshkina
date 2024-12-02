#pragma once
#include "IEvent.h"
#include "Play.h"
#include "Concert.h"
class Opera : public Play, Concert {
public:
	Opera();
	Opera(std::string title, int ageLimit, std::string theme,std::string instruments);
	~Opera();
	void displayEvent();
};






