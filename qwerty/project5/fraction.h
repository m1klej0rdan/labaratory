#ifndef FRACTION_H
#define FRACTION_H

namespace Fractions {
    class Fraction {
    public:
        int top;      // числитель
        int bottom;   // знаменатель
        
        // Конструктор
        Fraction(int t = 0, int b = 1);
        
        // Операции
        Fraction add(Fraction other);
        Fraction subtract(Fraction other);
        Fraction multiply(Fraction other);
        Fraction divide(Fraction other);
        
        // Вспомогательные
        void reduce();
        void print();
    };
}

#endif
