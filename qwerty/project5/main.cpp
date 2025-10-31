#include "fraction.h"
#include <iostream>

using namespace Fractions;

int main() {
    int num1, den1, num2, den2;
    char op;
    
    std::cout << " 1 numerator and denominator : ";
    std::cin >> num1 >> den1;
    
    std::cout << "2 numerator and denominator: ";
    std::cin >> num2 >> den2;
    
    std::cout << " Operation (+, -, *, /): ";
    std::cin >> op;
    
    Fraction f1(num1, den1);
    Fraction f2(num2, den2);
    Fraction res(0, 1);
    
    if (op == '+') res = f1.add(f2);
    if (op == '-') res = f1.subtract(f2);
    if (op == '*') res = f1.multiply(f2);
    if (op == '/') res = f1.divide(f2);
    
    std::cout << "\nanswer: ";
    f1.print();
    std::cout << " " << op << " ";
    f2.print();
    std::cout << " = ";
    res.print();
    std::cout << std::endl;
    
    return 0;
}
