#include "Slot.h"
#include "Person.h"
#include "Machine.h"
#include"Snack.h"

#include <windows.h>
#pragma execution_character_set( "utf-8" )//для вывода кириллицы,загуглил

int main()
{
	SetConsoleOutputCP(65001);
	Snack* snickers = new Snack("Сникерс", 70, 500);

	Slot* slot1 = new Slot("слот1", 3);

	Snack* bounty = new Snack("Баунти", 50, 400);

	Slot* slot2 = new Slot("слот2", 1);

	Slot* empty = new Slot();

	Machine* machine = new Machine();
	machine->addSlot(slot1);
	machine->addSlot(slot2);
	machine->addSlot(empty);
	machine->display();

	Person* person = new Person(100);
	person->buy(machine, slot2, bounty);
	person->buy(machine, slot1, snickers);
	person->buy(machine, slot1, snickers);
	machine->display();
	person->display();
	bounty->setCost(100);
}