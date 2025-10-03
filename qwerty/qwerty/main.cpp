#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int h, a;

    std::cin >> h;
    std::cin >> a;
    if (h <= 0 && a <= 0 && h >= 100000000 && a >= 100000000) {
        std::cout << "(0 < h) & (a < 10 ^ 8)" << std::endl;
        return 1;
    }

    double z = 0.5 * h * a;

    std::cout << "Площадь треугольника: " << z << std::endl;

    return 0;
}