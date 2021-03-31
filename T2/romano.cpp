// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include <string>
#include <map>
#include <regex>
#include "romano.hpp"

// Valida uma string representando um número romano.
bool Validate(std::string roman_number) {
    // Using regular expression to validate the string.
    std::regex e("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");
    return (std::regex_match(roman_number, e));
}

// Converte algarismos romanos em algarismos arábico.
int ConvertRomanToArabic(std::string roman_number) {
    const int INVALID = -1;  // constante de erro
    const int MAXSIZE = 30;  // constante de tamanho máximo
    const int MAXVALUE = 3000;  // constante de valor máximo

    int arabic_number = 0;  // resposta final
    int len = roman_number.size();  // tamanho do número

    if (len > MAXSIZE)
        return INVALID;
    if (!Validate(roman_number))
        return INVALID;

    std::map<char, int> to_arab = {{'I', 1},
                                   {'V', 5},
                                   {'X', 10},
                                   {'L', 50},
                                   {'C', 100},
                                   {'D', 500},
                                   {'M', 1000}};

    for (int i = 0; i < len; i++) {
        // Caso o algarismo da frente seja menor, esse algarismo é somado.
        if (i+1 > len || to_arab[roman_number[i+1]] <= to_arab[roman_number[i]])
            arabic_number += to_arab[roman_number[i]];
        // Caso contrário ele é subtraído.
        else
            arabic_number -= to_arab[roman_number[i]];
    }

    if (arabic_number > MAXVALUE)
        return INVALID;

    return arabic_number;
}
