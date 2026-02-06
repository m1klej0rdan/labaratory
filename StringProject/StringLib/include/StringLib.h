#ifndef STRINGLIB_H
#define STRINGLIB_H

#include <string>
#include <cctype>    
#include <algorithm> 
#include <sstream>   

namespace StringLib {


int countWords(const std::string& str);


struct CharCount {
    int vowels;
    int consonants;
};
CharCount countVowelsConsonants(const std::string& str);

std::string toUpper(const std::string& str);

std::string toLower(const std::string& str);

std::string reverseString(const std::string& str);

std::string removeExtraSpaces(const std::string& str);

bool isPalindrome(const std::string& str);

int countSubstring(const std::string& str, const std::string& substring);

} 

#endif 