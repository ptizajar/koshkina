#include "IPerson.h"
#include "IEmployee.h"
#include "Client.h"
#include "Cashier.h"
#include "Musician.h"
#include "Theatre.h"
#include "Window.h"
#include "IEvent.h"
#include "Play.h"
#include "Concert.h"
#include "Opera.h"

#include <iostream>

int main()
{
    Play* human_destiny1 = new Play("Human destiny", 12, "historical");
    Play* human_destiny2 = new Play("Human destiny", 12, "historical");
    Play* new_year_eve1 = new Play("New Year Eve", 0, "comedy");
    Play* new_year_eve2 = new Play("New Year Eve", 0, "comedy");
    Play* new_year_eve3 = new Play("New Year Eve", 0, "comedy");
    Concert* avangard1 = new Concert("Avangardian music", 0, "orchestral");
    Concert* avangard2 = new Concert("Avangardian music", 0, "orchestral");
    Concert* rock1 = new Concert("Simphonic rock hits", 12, "simphonic");
    Concert* rock2 = new Concert("Simphonic rock hits", 12, "simphonic");
    Concert* rock3 = new Concert("Simphonic rock hits", 12, "simphonic");
    Opera* jesus_superstar1 = new Opera("Jesus Christ Superstar", 18, "comedy", "electric");

    Cashier* galina = new Cashier("Galina", "Ivanovna", 65, 40, 1);
    Cashier* hope = new Cashier("Hope", "Tereshenko", 50, 5, 2);

    Musician* jimmy = new Musician("Jimmi", "Hendriks", 40, 25, "guitar");
    Musician* antonio = new Musician("Antonio", "Stradivari", 30, 20, "violin");
    
    IEvent** dimaBought = new IEvent * [1]{ new_year_eve1 };

    Client* sveta = new Client("Sveta", "Korobko", 18, nullptr, 0);
    Client* dima = new Client("Dima", "Pupkin", 10, dimaBought, 1);

    IEvent** firstWindow = new IEvent * [5]{ human_destiny1,human_destiny2,avangard1,avangard2,jesus_superstar1 };
    IEvent** secondWindow = new IEvent * [5]{ new_year_eve2,new_year_eve3,rock1,rock2,rock3 };

    Window* first = new Window(firstWindow, 5);
    Window* second = new Window(secondWindow, 5);

    Window** windows = new Window * [2]{ first,second };
    IEmployee** stuff = new IEmployee * [4]{ galina,hope,jimmy,antonio };

    Theatre* theatre = new Theatre(windows,2, stuff,4);

    theatre->sell(jesus_superstar1, sveta);
    sveta->displayPerson();
    theatre->sell(jesus_superstar1, sveta);
    sveta->displayPerson();
    theatre->sell(rock1, dima);
    dima->displayPerson();
}
