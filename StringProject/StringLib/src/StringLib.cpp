#include "StringLib.h"

namespace StringLib {

// Функция для проверки, является ли символ гласной буквой
bool isVowel(char c) {
    c = tolower(c); // Приводим к нижнему регистру для проверки
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'а' || c == 'е' || c == 'и' || c == 'о' || c == 'у' || 
            c == 'э' || c == 'ы' || c == 'ю' || c == 'я');
}

// Функция для проверки, является ли символ буквой
bool isLetter(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z') || (c >= 'а' && c <= 'я');
}

// Подсчет количества слов в строке
int countWords(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    return count;
}

// Подсчет количества гласных и согласных букв
CharCount countVowelsConsonants(const std::string& str) {
    CharCount result = {0, 0};
    
    for (char c : str) {
        if (isLetter(c)) {
            if (isVowel(c)) {
                result.vowels++;
            } else {
                result.consonants++;
            }
        }
    }
    
    return result;
}

// Перевод строки в верхний регистр
std::string toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

// Перевод строки в нижний регистр
std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Реверс строки
std::string reverseString(const std::string& str) {
    std::string result = str;
    std::reverse(result.begin(), result.end());
    return result;
}

// Удаление лишних пробелов (оставить только одинарные)
std::string removeExtraSpaces(const std::string& str) {
    std::string result;
    bool lastWasSpace = false;
    
    for (char c : str) {
        if (c == ' ') {
            if (!lastWasSpace) {
                result += c;
                lastWasSpace = true;
            }
        } else {
            result += c;
            lastWasSpace = false;
        }
    }
    
    // Удаляем пробелы в начале и конце строки
    if (!result.empty() && result.front() == ' ') {
        result.erase(0, 1);
    }
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    
    return result;
}

// Проверка, является ли строка палиндромом
bool isPalindrome(const std::string& str) {
    // Создаем копию строки без пробелов и в нижнем регистре
    std::string cleanStr;
    for (char c : str) {
        if (!isspace(c)) {
            cleanStr += tolower(c);
        }
    }
    
    // Проверяем, является ли чистая строка палиндромом
    std::string reversed = cleanStr;
    std::reverse(reversed.begin(), reversed.end());
    
    return cleanStr == reversed;
}

// Подсчет вхождений подстроки
int countSubstring(const std::string& str, const std::string& substring) {
    if (substring.empty()) return 0;
    
    int count = 0;
    size_t pos = 0;
    
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        count++;
        pos += substring.length();
    }
    
    return count;
}

} 