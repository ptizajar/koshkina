#pragma once
#include <string>
namespace age {

	enum humanAge {
		victorAge = 18,
		petrAge = 30,
		ivanAge = 10,
		sergeyAge = 40
	};

	std::string correctAlpha(std::string str);
	int correctCount(int count);
}

