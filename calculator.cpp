// calculator.cpp
#include "calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    }
    return 0.0;
}

int Calculator::power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}
