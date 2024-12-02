#pragma once
#include <string>
namespace age {

	enum humanAge {
		sveta = 18,
		lesha = 21,
		danya = 17,
	};

	enum mileage {
		lada = 10000,
	    toyota = 12000,
		bmw = 20000
	};
	enum animalAge {
		musya = 12,
		valya = 2,
		lusya = 5
	};
	std::string correctAlpha(std::string str);
	int correctCount(int count);
}
