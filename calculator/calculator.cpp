#include <iostream>
using namespace std;
#include "add.h"
#include <stdlib.h>


int main()
{
    while (true) {
        cout << "\nTo stop counting press F, to continue press anything else\n";
        char f;
        cin >> f;
        if (f == 'F' or f=='f') {
            exit(0);
        }
        else {

            char action;
            int a;
            int b;
            cout << "Ввведите знак" << endl;
            cin >> action;
            if (action == '!') {
                cout << "Ввведите число" << endl;
                cin >> a;
            }
            else {
                cout << "Ввведите число" << endl;
                cin >> a;
                cout << "Ввведите число" << endl;
                cin >> b;
            }

            switch (action) {
            case '+':
                cout << "Сумма: " << add(a, b);
                break;
            case '-':
                cout << "Разность: " << subtract(a, b);
                break;
            case '*':
                cout << "Произведение: " << multiply(a, b);
                break;
            case '/':
                if (!b) { cout << "на 0 делить нельзя";
                continue;
                }
                else {
                    cout << "Частное: " << divide(a, b);
                    break;
                }
            case '!':
                cout << "Факториал: " << factorial(a);
                break;
            case '^':
                cout << "Степень числа: " << power(a, b);
                break;

            }
        }
    }

    return 0;
}

