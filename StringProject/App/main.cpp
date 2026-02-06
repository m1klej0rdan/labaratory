#include <iostream>
#include <string>
#include "StringLib.h"


void printMenu() {
    std::cout << "\n=== МЕНЮ ОПЕРАЦИЙ СО СТРОКОЙ ===\n";
    std::cout << "1. Подсчитать количество слов\n";
    std::cout << "2. Подсчитать гласные и согласные буквы\n";
    std::cout << "3. Перевести в верхний регистр\n";
    std::cout << "4. Перевести в нижний регистр\n";
    std::cout << "5. Реверс строки\n";
    std::cout << "6. Удалить лишние пробелы\n";
    std::cout << "7. Проверить, является ли строка палиндромом\n";
    std::cout << "8. Подсчитать вхождения подстроки\n";
    std::cout << "9. Выполнить все операции\n";
    std::cout << "0. Ввести новую строку\n";
    std::cout << "10. Выход\n";
    std::cout << "Выберите операцию: ";
}


std::string inputString() {
    std::string str;
    std::cout << "\nВведите строку: ";
    std::getline(std::cin, str);
    return str;
}


void performAllOperations(const std::string& str) {
    std::cout << "\n=== РЕЗУЛЬТАТЫ ВСЕХ ОПЕРАЦИЙ ===\n";
    
   
    int wordCount = StringLib::countWords(str);
    std::cout << "1. Количество слов: " << wordCount << "\n";
    
   
    auto charCount = StringLib::countVowelsConsonants(str);
    std::cout << "2. Гласные буквы: " << charCount.vowels 
              << ", Согласные буквы: " << charCount.consonants << "\n";
    
    
    std::cout << "3. Верхний регистр: " << StringLib::toUpper(str) << "\n";
    
    std::cout << "4. Нижний регистр: " << StringLib::toLower(str) << "\n";
    
    std::cout << "5. Реверс строки: " << StringLib::reverseString(str) << "\n";
    
    std::cout << "6. Без лишних пробелов: " << StringLib::removeExtraSpaces(str) << "\n";
    
   
    bool isPal = StringLib::isPalindrome(str);
    std::cout << "7. Является палиндромом: " << (isPal ? "Да" : "Нет") << "\n";
    
    std::string substring;
    std::cout << "Введите подстроку для поиска: ";
    std::getline(std::cin, substring);
    int subCount = StringLib::countSubstring(str, substring);
    std::cout << "8. Подстрока '" << substring << "' встречается " 
              << subCount << " раз(а)\n";
}

int main() {
    
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    std::cout << "=== БИБЛИОТЕКА ДЛЯ РАБОТЫ СО СТРОКАМИ ===\n";
    
    std::string currentString = inputString();
    
    bool running = true;
    
    while (running) {
        printMenu();
        int choice;
        std::cin >> choice;
        std::cin.ignore(); 
        
        switch (choice) {
            case 1: {
                int wordCount = StringLib::countWords(currentString);
                std::cout << "Количество слов: " << wordCount << "\n";
                break;
            }
            
            case 2: {
                auto charCount = StringLib::countVowelsConsonants(currentString);
                std::cout << "Гласные буквы: " << charCount.vowels 
                          << ", Согласные буквы: " << charCount.consonants << "\n";
                break;
            }
            
            case 3: {
                std::string upper = StringLib::toUpper(currentString);
                std::cout << "Верхний регистр: " << upper << "\n";
                break;
            }
            
            case 4: {
                std::string lower = StringLib::toLower(currentString);
                std::cout << "Нижний регистр: " << lower << "\n";
                break;
            }
            
            case 5: {
                std::string reversed = StringLib::reverseString(currentString);
                std::cout << "Реверс строки: " << reversed << "\n";
                break;
            }
            
            case 6: {
                std::string noSpaces = StringLib::removeExtraSpaces(currentString);
                std::cout << "Без лишних пробелов: " << noSpaces << "\n";
                break;
            }
            
            case 7: {
                bool isPal = StringLib::isPalindrome(currentString);
                std::cout << "Является палиндромом: " << (isPal ? "Да" : "Нет") << "\n";
                break;
            }
            
            case 8: {
                std::string substring;
                std::cout << "Введите подстроку для поиска: ";
                std::getline(std::cin, substring);
                int subCount = StringLib::countSubstring(currentString, substring);
                std::cout << "Подстрока '" << substring << "' встречается " 
                          << subCount << " раз(а)\n";
                break;
            }
            
            case 9: {
                performAllOperations(currentString);
                break;
            }
            
            case 0: {
                currentString = inputString();
                break;
            }
            
            case 10: {
                std::cout << "Выход из программы...\n";
                running = false;
                break;
            }
            
            default: {
                std::cout << "Неверный выбор. Попробуйте снова.\n";
                break;
            }
        }
    }
    
    return 0;
}