#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <vector>


namespace StringUtils {

    // Функция: Читает строки из файла в вектор возвращает количество успешно прочитанных строк максимум 100 строк по 256 символов
    
    int readStringsFromFile(const std::string& inputFile, 
                           std::vector<std::string>& lines);

    // Функция: Подсчитывает количество слов в каждой строке результаты записываются в вектор wordCounts
    
    void countWordsInLines(const std::vector<std::string>& lines,
                          std::vector<int>& wordCounts);

    // Функция: Находит самую длинную строку возвращает индекс самой длинной строки (-1 если пусто)
    
    int findLongestString(const std::vector<std::string>& lines);

    // Функция: Сортирует строки по длине (пузырьковая сортировка) модифицирует вектор lines на месте
 
    void sortStringsByLength(std::vector<std::string>& lines);

} 

#endif 
