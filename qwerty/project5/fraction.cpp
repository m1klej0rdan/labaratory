#include "fraction.h"
#include <iostream>

using namespace Fractions;

//  наибольший общий делитель
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Конструктор
Fraction::Fraction(int t, int b) {
    top = t;
    bottom = b;
    
    if (bottom == 0) {
        bottom = 1;
    }
    
    reduce();
}

// Сокращение дроби
void Fraction::reduce() {
    int g = gcd(top, bottom);
    if (g != 0) {
        top = top / g;
        bottom = bottom / g;
    }
}

// Сложение
Fraction Fraction::add(Fraction other) {
    int newTop = top * other.bottom + other.top * bottom;
    int newBottom = bottom * other.bottom;
    return Fraction(newTop, newBottom);
}

// Вычитание
Fraction Fraction::subtract(Fraction other) {
    int newTop = top * other.bottom - other.top * bottom;
    int newBottom = bottom * other.bottom;
    return Fraction(newTop, newBottom);
}

// Умножение
Fraction Fraction::multiply(Fraction other) {
    int newTop = top * other.top;
    int newBottom = bottom * other.bottom;
    return Fraction(newTop, newBottom);
}

// Деление
Fraction Fraction::divide(Fraction other) {
    int newTop = top * other.bottom;
    int newBottom = bottom * other.top;
    return Fraction(newTop, newBottom);
}

// Вывод дроби
void Fraction::print() {
    std::cout << top << "/" << bottom;
}
