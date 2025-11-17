#include<iostream>
#include "calculator.h"
using namespace std;
int main()
{
    Calculator calc;
    cout<<"Simple Calculator"<<endl;
    cout<<"5 + 8 = "<<calc.add(5, 8)<<endl;
    cout<<"10 - 1 = "<<calc.subtract(10, 1)<<endl;
    cout<<"2 * 7 = "<<calc.multiply(2, 7)<<endl;
    cout<<"9 / 6 = "<<calc.divide(9, 6)<<endl;
    cout<<"4 ^ 3 = "<<calc.power(4, 3)<<endl;
    return 0;
}
