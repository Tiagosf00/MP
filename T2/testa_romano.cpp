// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include <stdexcept>
#include <string>
#include "romano.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch_amalgamated.hpp"

TEST_CASE( "Numbers were converted" ) {
    REQUIRE( ConvertRomanToArabic("teste") == 1 );
    REQUIRE( ConvertRomanToArabic("testesoqnao") == 0 );
}