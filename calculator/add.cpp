#include <iostream>
#include <stdlib.h>
#include "add.h"
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
        return (double)a / (double)b;//для возврата неокруглённого результата
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}


double power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}
