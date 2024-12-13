#include "Human.h"
#include "Child.h"
#include "Adult.h"
#include "Teenager.h"
#include <iostream>
#include <ostream>
#include <fstream>
#include "enum.h";
using namespace age;

int main()
{
	Adult* adult = new Adult();
	Child* child = new Child();
	Teenager* teenager = new Teenager();
	Adult* sergey = new Adult("Sergey", "Sergeev", sergeyAge, 90, 170, "policeman");
	Human** humans = new Human * [3]{ adult,child,teenager };
	for (int i = 0; i < 3; i++) {
		humans[i]->read();
	}
	bool start = true;
	do {
		std::cout << "Choose human: 1 = adult, 2 = child, 3 = teenager, 4 = display all, 0 = exit program" << std::endl;
		char choice;
		std::cin >> choice;

		switch (choice) {
		case '1':
			humans[0]->display();
			break;
		case '2':
			humans[1]->display();
			break;
		case '3':
			humans[2]->display();
			break;

		case '4':
			for (int i = 0; i < 3; i++) {
				humans[i]->display();
			}
			break;
		case '0':
			start = false;
			break;
		default:
			break;

		}
	} while (start);


	adult->imt();
	child->yearBorn();
	std::cout << *teenager;
	sergey->display();
	++(*child);
	--(*adult);
	std::ofstream out("Human.txt", std::ios::out | std::ios::trunc);
	out.close();
	for (int i = 0; i < 3; i++) {
		humans[i]->writeToFile();
		std::cout << "Human " << humans[i]->getName() << " has written to file" << std::endl;
	}

}
