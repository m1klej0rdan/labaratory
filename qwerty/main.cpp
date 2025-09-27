#include <iostream>
#include <limits>

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "���: short\n";
    std::cout << "������: " << sizeof(short) << " ����\n";
    std::cout << "���: " << std::numeric_limits<short>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<short>::max() << "\n\n";
    short a = 10, b = 20;
    std::cout << a + b << "\n";

    std::cout << "���: unsigned short\n";
    std::cout << "������: " << sizeof(unsigned short) << " ����\n";
    std::cout << "���: " << std::numeric_limits<unsigned short>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<unsigned short>::max() << "\n\n";
    unsigned short aa = 10, bb = 20;
    std::cout << aa + bb << "\n";

    std::cout << "���: int\n";
    std::cout << "������: " << sizeof(int) << " ����\n";
    std::cout << "���: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<int>::max() << "\n\n";
    int azz = 10, bzz = 20;
    std::cout << azz * bzz << "\n";

    std::cout << "���: unsigned int\n";
    std::cout << "������: " << sizeof(unsigned int) << " ����\n";
    std::cout << "���: " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<unsigned int>::max() << "\n\n";
    unsigned int ajj = 10, bjj = 20;
    std::cout << ajj - bjj << "\n";

    std::cout << "���: long\n";
    std::cout << "������: " << sizeof(long) << " ����\n";
    std::cout << "���: " << std::numeric_limits<long>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<long>::max() << "\n\n";
    long axx = 10, bxx = 20;
    std::cout << axx / bxx << "\n";

    std::cout << "���: unsigned long\n";
    std::cout << "������: " << sizeof(unsigned long) << " ����\n";
    std::cout << "���: " << std::numeric_limits<unsigned long>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<unsigned long>::max() << "\n\n";
    unsigned long acc = 10, bcc = 20;
    std::cout << acc % bcc << "\n";

    std::cout << "���: long long\n";
    std::cout << "������: " << sizeof(long long) << " ����\n";
    std::cout << "���: " << std::numeric_limits<long long>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<long long>::max() << "\n\n";
    long long avv = 10, bvv = 20;
    std::cout << avv / bvv << "\n";

    std::cout << "���: unsigned long long\n";
    std::cout << "������: " << sizeof(unsigned long long) << " ����\n";
    std::cout << "���: " << std::numeric_limits<unsigned long long>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<unsigned long long>::max() << "\n\n";
    unsigned long long abb = 10, bbb = 20;
    std::cout << abb / bbb << "\n";

    std::cout << "���: float\n";
    std::cout << "������: " << sizeof(float) << " ����\n";
    std::cout << "���: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<float>::max() << "\n\n";
    float aqq = 10.2f, bqq = 20.2f;
    std::cout << aqq + bqq << "\n";

    std::cout << "���: double\n";
    std::cout << "������: " << sizeof(double) << " ����\n";
    std::cout << "���: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<double>::max() << "\n\n";
    double aww = 10.22, bww = 20.11;
    std::cout << aww * bww << "\n";

    std::cout << "���: long double\n";
    std::cout << "������: " << sizeof(long double) << " ����\n";
    std::cout << "���: " << std::numeric_limits<long double>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<long double>::max() << "\n\n";
    long double aee = 10.0, bee = 20.0;
    std::cout << aee / bee << "\n";

    std::cout << "���: char\n";
    std::cout << "������: " << sizeof(char) << " ����\n";
    std::cout << "���: " << (int)std::numeric_limits<char>::min() << "\n";
    std::cout << "����: " << (int)std::numeric_limits<char>::max() << "\n\n";
    char arr = 100, brr = 10;
    std::cout << arr + brr << "\n";

    std::cout << "���: bool\n";
    std::cout << "������: " << sizeof(bool) << " ����\n";
    std::cout << "���: " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "����: " << std::numeric_limits<bool>::max() << "\n\n";
    bool ahh = 1, bhh = 0;
    std::cout << (ahh && bhh) << "\n";


    return 0;
}