#include "Slot.h"
#include "Buyer.h"
#include "Machine.h"
#include"Snack.h"
int main()
{
	Snack* snickers = new Snack("Snickers", 78.50);
	Snack* bounty = new Snack("Bounty", 99.99);
	Snack* mms = new Snack("M&M's", 70.30);
	Snack* cola = new Snack("Cola", 100);
	Snack** forFirst = new Snack * [2]{ snickers,bounty };
	Snack** forSecond = new Snack * [1]{ mms };

	Slot* first = new Slot(forFirst, 2);
	Slot* second = new Slot(forSecond, 1);
	Slot* third = new Slot(nullptr, 0);
	Machine* machine = new Machine(nullptr, 0, 100.0);
	machine->add(first);
	machine->add(second);
	machine->add(third);
	std::cout << "Quantity empty slots: " << machine->emptySlots()<<std::endl;
	Buyer* me = new Buyer(100.0);
	machine->sell(cola, me);
	machine->sell(snickers, me);
	machine->sell(mms, me);
	machine->display();
	std::cout<<me->getMoney();

	delete snickers;
	delete bounty;
	delete mms;
	delete cola;
	delete[]forFirst;
	delete[]forSecond;
	delete first;
	delete second;
	delete third;
	delete machine;
	delete me;
}