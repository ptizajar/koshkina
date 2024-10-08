#include <iostream>
using namespace std;
#include "add.h"

int lives = 3;
int current_location = 1;
int* inventory = new int[2]{ 0,0 };

void displayInventory() {
	for (int i = 0;i < 2;i++) {
		if (inventory[i] == 1) {
			cout << "50 rubles ";
		}
		if (inventory[i] == 2) {
			cout << "chocolate bar ";
		}
		
	}
}

void displayIntro() {
	cout << "Welcome to console game bout common student's life!\nIn this game you have to choose one of the actions using numbers\nHave fun!";

}

void displayCurrentLocation(int locationIndex) {
	switch (locationIndex) {
	case 1:
		int choose;
		cout << "You have waken up. What are you choosing?\n1 - go to college\n2 - continue to sleep\n";
		cin >> choose;
		if (choose == 1) {
			displayCurrentLocation(2);
		}
		else if (choose == 2) {
			lives--;
			cout << "Most students decided the same.Teacher has written a report. So you have to go to second lesson\n";
			displayCurrentLocation(4);
		}
		else { cout << "Unknown choose"; }
		break;
	case 2:
		int choose;
		cout << "Design lesson\nWhat are you choosing?\n1 - play cards on computer\n2 - work in figma\n";
		cin >> choose;
		break;
	case 3:
		cout << "PE lesson\nWhat are you choosing?\n1 - run\n2 - hide in dressing room";
		break;
	case 4:
		cout << "Second lesson\nWhat are you choosing?\n1 - be on time\n2 - be late";
		break;
	case 5:
		cout << "You have found 50 rubles on the ground\nWhat are you choosing?\n1 - take\n2 - leave on the ground";
		break;
	case 6:
		cout << "Long recess\nWhat are you choosing?\n1 - go to canteen\n2 - go to red and white\n3 - go to baker's";
		break;
	case 7:
		cout << "Red and white\nWhat are you choosing?\n1 - buy chocolate bar\n2 - buy food";
		break;
	case 8:
		cout << "Baker's\nWhat are you choosing?\n1 - buy a bun\n2 - go away";
		break;
	case 9:
		cout << "Sudden test\nWhat are you choosing?\n1 - write what you know\n2 - write like Sveta";
		break;
	case 10:
		cout << "You want to write like Sveta\nWhat are you choosing?\n1 - write exactly like she\n2 - make a couple mistakes";
		break;
	case 11:
		cout << "Last lesson. You're tired\nWhat are you choosing?\n1 - go home\n2 - stay";
		break;
	}

}