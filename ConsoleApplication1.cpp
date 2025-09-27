#include <iostream>
#include <limits>
/*

Переменная в программировании- это именнованная область памяти в которой хранится некоторое значение к которому можно обрашаться и котороке можно изменять во время выполнения программы

Целочисленные
Тип: short
Размер: 2 байт

Тип: unsigned short
Размер: 2 байт

Тип: int
Размер: 4 байт

Тип: unsigned int
Размер: 4 байт


Тип: long
Размер: 4 байт

Тип: unsigned long
Размер: 4 байт

Тип: long long
Размер: 8 байт

Тип: unsigned long long
Размер: 8 байт

вещественные
Тип: float
Размер: 4 байт

Тип: double
Размер: 8 байт

Тип: long double
Размер: 8 байт

целочисленные
Тип: char
Размер: 1 байт

Логический
Тип: bool
Размер: 1 байт
*/
int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Тип: short\n";
    std::cout << "Размер: " << sizeof(short) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<short>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<short>::max() << "\n\n";
    short a = 10, b = 20;
    std::cout << a + b << "\n";

    std::cout << "Тип: unsigned short\n";
    std::cout << "Размер: " << sizeof(unsigned short) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<unsigned short>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<unsigned short>::max() << "\n\n";
    unsigned short aa = 10, bb = 20;
    std::cout << aa + bb << "\n";

    std::cout << "Тип: int\n";
    std::cout << "Размер: " << sizeof(int) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<int>::max() << "\n\n";
    int azz = 10, bzz = 20;
    std::cout << azz * bzz << "\n";

    std::cout << "Тип: unsigned int\n";
    std::cout << "Размер: " << sizeof(unsigned int) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<unsigned int>::max() << "\n\n";
    unsigned int ajj = 10, bjj = 20;
    std::cout << ajj - bjj << "\n";

    std::cout << "Тип: long\n";
    std::cout << "Размер: " << sizeof(long) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<long>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<long>::max() << "\n\n";
    long axx = 10, bxx = 20;
    std::cout << axx / bxx << "\n";

    std::cout << "Тип: unsigned long\n";
    std::cout << "Размер: " << sizeof(unsigned long) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<unsigned long>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<unsigned long>::max() << "\n\n";
    unsigned long acc = 10, bcc = 20;
    std::cout << acc % bcc << "\n";

    std::cout << "Тип: long long\n";
    std::cout << "Размер: " << sizeof(long long) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<long long>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<long long>::max() << "\n\n";
    long long avv = 10, bvv = 20;
    std::cout << avv / bvv << "\n";

    std::cout << "Тип: unsigned long long\n";
    std::cout << "Размер: " << sizeof(unsigned long long) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<unsigned long long>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<unsigned long long>::max() << "\n\n";
    unsigned long long abb = 10, bbb = 20;
    std::cout << abb / bbb << "\n";

    std::cout << "Тип: float\n";
    std::cout << "Размер: " << sizeof(float) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<float>::max() << "\n\n";
    float aqq = 10.2f, bqq = 20.2f;
    std::cout << aqq + bqq << "\n";

    std::cout << "Тип: double\n";
    std::cout << "Размер: " << sizeof(double) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<double>::max() << "\n\n";
    double aww = 10.22, bww = 20.11;
    std::cout << aww * bww << "\n";

    std::cout << "Тип: long double\n";
    std::cout << "Размер: " << sizeof(long double) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<long double>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<long double>::max() << "\n\n";
    long double aee = 10.0, bee = 20.0;
    std::cout << aee / bee << "\n";

    std::cout << "Тип: char\n";
    std::cout << "Размер: " << sizeof(char) << " байт\n";
    std::cout << "Мин: " << (int)std::numeric_limits<char>::min() << "\n";
    std::cout << "Макс: " << (int)std::numeric_limits<char>::max() << "\n\n";
    char arr = 100, brr = 10;
    std::cout << arr + brr << "\n";

    std::cout << "Тип: bool\n";
    std::cout << "Размер: " << sizeof(bool) << " байт\n";
    std::cout << "Мин: " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "Макс: " << std::numeric_limits<bool>::max() << "\n\n";
    bool ahh = 1, bhh = 0;
    std::cout << (ahh && bhh) << "\n";


    return 0;
}