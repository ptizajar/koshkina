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
	Wild* wild = new Wild();
	Pet* pet = new Pet();
	Street* street = new Street();
	Wild* forEnum = new Wild("rino", "rhino", "grey", forwild, 450.3);
	IAnimal** animals= new IAnimal * [3]{ wild,pet,street };
	for (int i = 0; i < 3; i++) {
		animals[i]->read();
	}
	bool start = true;
	do {
		std::cout << "Choose animal type: 1 = wild, 2 = pet, 3 = street, 4 = display all, 0 = exit program" << std::endl;
		char choice;
		std::cin >> choice;
		
		switch (choice) {
		case '1':
			animals[0]->displayAnimal();
			break;
		case '2':
			animals[1]->displayAnimal();
			break;
		case '3':
			animals[2]->displayAnimal();
			break;

		case '4':
			for (int i = 0; i < 3; i++) {
				animals[i]->displayAnimal();
			}
			break;
		case '0':
			start = false;
			break;
		default:
			break;

		}
	} while (start);


	wild->newName("Leonid");
	pet->newWeight(10);
	++(*wild);
	--(*street);
	std::cout << pet;
	street->displayAnimal();
	std::ofstream out("Animal.txt", std::ios::out | std::ios::trunc);
	out.close();
	for (int i = 0; i < 3; i++) {
		animals[i]->writeToFile();
		std::cout << "Animal " << animals[i]->getName() << " has written to file" << std::endl;
	}

}