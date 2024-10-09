#include <iostream>
using namespace std;
#include "add.h"
#include <stdlib.h>

int lives = 3;
int* inventory = new int[2]{ 0,0 };

void displayInventory() {
	cout << "Here is your inventory!\n";
	if (inventory[0] == 1) {
			cout << "50 rubles\n";
		}
	if (inventory[1] == 1) {
			cout << "chocolate bar\n";
		}
	if(inventory[0]==0 and inventory[1]==0) { 
		cout << "Nothing here\n"; 
		}
		
	}


void displayIntro() {
	cout << "Welcome to console game about common student's life!\nIn this game you have to choose one of the actions using numbers\nBe careful, you have only 3 lives!\nHave fun!\n";
}

int processMove(int currentLocation, int choice) {
	switch (currentLocation) {
	case 1:
		if (choice == 1) {
			return 2;
		}
		else if (choice == 2) {
			cout << "Most of your classmates desided the same. Teacher wrote a report\n";
			lives--;
			cout << "You've loosed a life\nYou have "<<lives<<" lives left\n";
			return 4;
		}
		else {
			exit(0);
		}
		break;
	case 2:
		if (choice == 1) {
			cout << "You've had a good time\n";
			return 3;
		}
		else if (choice == 2) {
			cout << "You've got tired, work hasn't been cheked\n";
			return 3;
		}
		else {
			exit(0);
		}
		break;
	case 3:
		if (choice == 1) {
			return 5;
		}
		else if (choice == 2) {
			cout << "You haven't been noted in journal\n";
			lives--;
			cout << "You've loosed a life\nYou have" << lives << " lives left";
			return 6;
		}
		else {
			exit(0);
		}
		break;
	case 4:
		if (choice == 1) {
			return 6;
		}
		else if (choice == 2) {
			cout << "You've ran for 10 minutes less!\n";
			return 6;
		}
		else {
			exit(0);
		}
		break;
	case 5:
		if (choice == 1) {
			inventory[0] = 1;
			displayInventory();
			return 6;
		}
		else if (choice == 2) {
			return 6;
		}
		else {
			exit(0);
		}
		break;
	case 6:
		if (choice == 1) {
			cout << "You've got poisoned and gone home\n";
			lives = 0;
		}
		else if (choice == 2) {
			return 7;
		}
		else if (choice == 3) {
			return 8;
		}
		else {
			exit(0);
		}
		break;
	case 7:
		if (choice == 1) {
			inventory[1] = 1;
			displayInventory();
			return 9;
		}
		else if (choice == 2) {
			return 9;
		}
		else {
			exit(0);
		}
		break;
	case 8:
		if (choice == 1) {
			if (inventory[0] == 1) {
				inventory[0] = 0;
				displayInventory();
			}
			else {
				cout << "You don't have enough money =(\n";
			}
			
			
			return 9;
		}
		else if (choice == 2) {
			return 9;
		}
		else {
			exit(0);
		}
		break;
	case 9:
		if (choice == 1) {
			cout << "Now you won't get an automatic 5\n";
			lives--;
			cout << "You've loosed a life\nYou have " << lives << " lives left\n";
			return 11;
		}
		else if (choice == 2) {
			if (inventory[1] == 1) {
				inventory[1] = 0;
				displayInventory();
				return 10;
			}
			else {
				cout << "You don't have anything to give her\n";
				return 9;
			}
		}
		else {
			exit(0);
		}
		break;
	case 10:
		if (choice == 1) {
			cout << "You've been caught. Sveta has taken offense\n";
			lives--;
			cout << "You've loosed a life\nYou have " << lives << " lives left\n";
			return 11;

		}
		else if (choice == 2) {
			return 11;
		}
		else {
			exit(0);
		}
		break;
	case 11:
		if (choice == 1) {
			cout << "You're home. Another day has passed. 4 months of days like this are ahead\n";
			exit(0);
		}
		else if (choice == 2) {
			cout << "After lesson you've been crushed down in bus during rush hour\n";
			lives--;
			cout << "You've loosed a life\nYou have " << lives << " lives left\n";
			if (!lives) {
				cout << "You've lost all your lives!\nGAME OVER!!!";
				exit(0);
			}
			cout << "You're home. Another day has passed. 4 months of days like this are ahead\n";
			exit(0);
		}
		else {
			exit(0);
		}
		break;

	}
	
}


void displayCurrentLocation(int locationIndex) {
	switch (locationIndex) {
	case 1:
		cout << "You have waken up. What are you choosing?\n1 - go to college\n2 - continue to sleep\n";
		break;
	case 2:
		cout << "Design lesson\nWhat are you choosing?\n1 - play cards on computer\n2 - work in figma\n";
		break;
	case 3:
		cout << "PE lesson\nWhat are you choosing?\n1 - to run\n2 - to hide in dressing room\n";
		break;
	case 4:
		cout << "Second lesson\nWhat are you choosing?\n1 - be on time\n2 - be late\n";
		break;
	case 5:
		cout << "You have found 50 rubles on the ground\nWhat are you choosing?\n1 - take\n2 - leave on the ground\n";
		break;
	case 6:
		cout << "Long recess\nWhat are you choosing?\n1 - go to canteen\n2 - go to red and white\n3 - go to baker's\n";
		break;
	case 7:
		cout << "Red and white\nWhat are you choosing?\n1 - buy chocolate bar\n2 - buy food\n";
		break;
	case 8:
		cout << "Baker's\nWhat are you choosing?\n1 - buy a bun\n2 - go away\n";
		break;
	case 9:
		cout << "Sudden test\nWhat are you choosing?\n1 - write what you know\n2 - write like Sveta\n";
		break;
	case 10:
		cout << "You're going to write like Sveta\nWhat are you choosing?\n1 - write exactly like she\n2 - make a couple mistakes\n";
		break;
	case 11:
		cout << "Last lesson. You're tired\nWhat are you choosing?\n1 - go home\n2 - stay\n";
		break;
	}
	int choose;
	cin >> choose;
	int nextLocation = processMove(locationIndex, choose);
	if (!lives) {
		cout << "You've lost all your lives!\nGAME OVER!!!";
		exit(0);
	}
	displayCurrentLocation(nextLocation);
}