#include <iostream>
#include "add.h"

char shiftCharInRange(char ch, int shift, bool encrypt, char first, char last) {//функция кодирования\декодирования буквы в передаваемом регистре
    if (ch >= first and ch <= last) {
        ch -= first;//получаем код от 0 до 25
        if (encrypt) {
            ch += shift;
        }
        else {
            ch -= shift;
            ch += 26;//чтобы не получить отрицательное число,на остаток не повлияет
        }
        ch = ch % 26;//если код числа >25 алфавит начинается сначала 
        ch += first;//преобразование в char
    }
    return ch;
}

char caesarCipher(char ch, int shift, bool encrypt) {//применяется функция, описанная выше, проверяются оба регистра
    ch = shiftCharInRange(ch, shift, encrypt, 'a', 'z');
    ch = shiftCharInRange(ch, shift, encrypt, 'A', 'Z');
    return ch;
}

void caesarCipher(char arr[], int shift, bool encrypt) {//перегрузка функции
    while (*arr++ = caesarCipher(*arr, shift, encrypt));//перезапись строки
}

