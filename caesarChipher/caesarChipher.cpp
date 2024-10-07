#include <iostream>
#include "add.h"
using namespace std;

int main()
{
    while (true) {
        char option;
        cout << "Input mode: E - encoding, D - decoding" << endl;
        cin >> option;
        bool encrypt;
        if (option == 'E') {
            encrypt = true;
        }
        else if (option == 'D') {
            encrypt = false;
        }
        else {
            cout << "Unknown mode";
            return 0;
        }
        int shift;
        cout << "Input shift" << endl;
        cin >> shift;
        int size;
        cout << "Input message length" << endl;
        cin >> size;
        char* arr = new char[size];
        cout << "Input message" << endl;
        cin.get();
        cin.getline(arr, size);
    
        caesarCipher(arr, shift, encrypt);
        cout << arr<<endl;
        delete[] arr;
    }

}

