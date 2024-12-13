#include "enum.h"
#include <iostream>
std::string age::correctAlpha(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!isalpha(str.at(i)) && !ispunct(str.at(i))) {
			std::cout << "Wrong data" << std::endl;
			return "undefined";
		}
	}
	return str;
}

int age::correctCount(int count) {
	if (count >= 0) return count;
	else {
		std::cout << "Wrong data" << std::endl;
		return 0;
	}

}