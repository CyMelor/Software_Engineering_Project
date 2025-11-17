#include<iostream>
#include "calculator.h"
using namespace std;
int main()
{
    Calculator calc;
    cout<<"A_user branch test"<<endl;
    cout<<"Simple Calculator"<<endl;
    cout<<"5 + 8 = "<<calc.add(5, 8)<<endl;
    cout<<"10 - 1 = "<<calc.subtract(10, 1)<<endl;
    cout<<"2 * 7 = "<<calc.multiply(2, 7)<<endl;
    cout<<"9 / 6 = "<<calc.divide(9, 6)<<endl;
    cout<<"4 ^ 3 = "<<calc.power(4, 3)<<endl;
    try {
        cout<<"2 / 0 = "<<calc.divide(2, 0)<<endl;
    } catch (const std::exception& e) {
        cout<<"Error: "<<e.what()<<endl;
    }
    cout<<"10 % 3 = "<<calc.modulo(10, 3)<<endl;
    try {
        cout<<"3 % 0 = "<<calc.modulo(3, 0)<<endl;
    } catch (const std::exception& e) {
        cout<<"Error: "<<e.what()<<endl;
    }
    return 0;
}
