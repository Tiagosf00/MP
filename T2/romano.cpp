// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include <string>
#include <map>
#include "romano.hpp"

// Valida uma string representando um número romano.
bool Validate(std::string roman_number){
    return true;
}

// Converte algarismos romanos em algarismos arábico, 
int ConvertRomanToArabic(std::string roman_number){
    const int INVALID = -1;  // constante de erro
    if(!Validate(roman_number))
        return INVALID;

    std::map<char, int> map_roman = {{'I', 1},
                                     {'V', 5},
                                     {'X', 10},
                                     {'L', 50},
                                     {'C', 100},
                                     {'D', 500},
                                     {'M', 1000}};
    int arabic_number = 0;  // resposta final
    int roman_number_len = roman_number.size();

    for(int i = 0; i < roman_number_len; i++){
        // Caso o algarismo da frente seja menor, esse algarismo é somado.
        if(map_roman[roman_number[i+1]] <= map_roman[roman_number[i]])
            arabic_number += map_roman[roman_number[i]];
        // Caso contrário ele é subtraído.
        else
            arabic_number -= map_roman[roman_number[i]];  
    }

    return arabic_number;
}