#include "IAnimal.h"
#include "Wild.h"
#include "Pet.h"
#include "Street.h"
#include <iostream>
#include <fstream>
#include "myenum.h";
using namespace age;

int main()
{
	Wild* leva = new Wild("leva", "lion", "ginger", 30, 150.0, "africa");
	Wild* dumbo = new Wild("dumbo", "elephant", "grey", 20, 3000.0, "india");
	Pet* musya = new Pet("musya", "cat", "black", 12, 3.0, "sveta");
	Pet* valya = new Pet("valya", "hamster", "beige", 2, 0.1, "dima");
	Street* druzhok = new Street("druzhok", "dog", "brown", 5, 7.3, "everywhere", "nodody", true);
	IAnimal** arr = new IAnimal * [5]{ leva,dumbo,musya,valya,druzhok };
	bool start = true;
	do {
		std::cout << "Choose animal type: 1 = lion, 2 = elephant, 3 = cat, 4 = hamster, 5 = dog, 6 = display all, 0 = exit program" << std::endl;
		char choice;
		std::cin >> choice;
		switch (choice) {
		case '1':
			arr[0]->displayAnimal();
			break;
		case '2':
			arr[1]->displayAnimal();
			break;
		case '3':
			arr[2]->displayAnimal();
			break;
		case '4':
			arr[3]->displayAnimal();
			break;
		case '5':
			arr[4]->displayAnimal();
			break;
		case '6':
			for (int i = 0; i < 5; i++) {
				arr[i]->displayAnimal();
			}
			break;
		case '0':
			start = false;
			break;
		default:
			break;

		}
	} while (start);
	
	std::ofstream out("Animal.txt", std::ios::out | std::ios::trunc);
	out.close();
	for (int i = 0; i < 5; i++) {
		arr[i]->writeToFile();
		std::cout << "Animal " << arr[i]->getName() << " has written to file" << std::endl;
	}

	delete dumbo;
	delete valya;
	delete musya;
	delete leva;
	delete druzhok;
	delete[]arr;
}

