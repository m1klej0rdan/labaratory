#include "string-utils.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

namespace StringUtils {

    // Функция 1: Чтение строк из файла
    int readStringsFromFile(const std::string& inputFile, 
                           std::vector<std::string>& lines) {
        // Открываем файл для чтения
        std::ifstream file(inputFile);
        
        // Проверяем, открылся ли файл корректно
        if (!file.is_open()) {
            std::cerr << "Ошибка: не удалось открыть файл " << inputFile << std::endl;
            return 0; // Возвращаем 0 если файл не открыт
        }
        
        std::string line;
        int count = 0;
        
        // Читаем строки из файла до 100 строк
        while (std::getline(file, line) && count < 100) {
            // Проверяем длину строки (максимум 256 символов)
            if (line.length() <= 256) {
                lines.push_back(line);
                count++;
            }
        }
        
        file.close(); 
        return count; 
    }

    // Функция 2: Подсчёт количества слов в каждой строке
    void countWordsInLines(const std::vector<std::string>& lines,
                          std::vector<int>& wordCounts) {
        wordCounts.clear(); // Очищаем вектор 
        
        // Проходим по каждой строке
        for (const auto& line : lines) {
            std::istringstream iss(line); // Преобразуем строку в поток
            std::string word;
            int wordCount = 0;
            
            // Считаем слова в строке
            while (iss >> word) {
                wordCount++;
            }
            
            wordCounts.push_back(wordCount); // Добавляем результат
        }
    }

    // Функция 3: Нахождение самой длинной строки
    int findLongestString(const std::vector<std::string>& lines) {
        // Проверяем, не пусто ли массив
        if (lines.empty()) {
            return -1; // Возвращаем -1 если массив пуст
        }
        
        int maxIndex = 0; // Индекс самой длинной строки
        size_t maxLength = lines[0].length(); // Длина первой строки
        
        // Проходим по остальным строкам
        for (size_t i = 1; i < lines.size(); i++) {
            if (lines[i].length() > maxLength) {
                maxLength = lines[i].length();
                maxIndex = i;
            }
        }
        
        return maxIndex; // Возвращаем индекс самой длинной строки
    }

    // Функция 4: Сортировка строк по длине (пузырьковая сортировка)
    void sortStringsByLength(std::vector<std::string>& lines) {
        int n = lines.size();
        
        // Внешний цикл пузырьковой сортировки
        for (int i = 0; i < n - 1; i++) {
            // Внутренний цикл сравнивает соседние элементы
            for (int j = 0; j < n - i - 1; j++) {
                // Если текущая строка длиннее следующей, меняем их местами
                if (lines[j].length() > lines[j + 1].length()) {
                    std::swap(lines[j], lines[j + 1]);
                }
            }
        }
    }

} 
