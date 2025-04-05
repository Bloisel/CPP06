#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>

class ScalarConverter 
{
    public : 
        static void convert(const std::string &litt);

    private : 
        ScalarConverter() = delete;
        ~ScalarConverter() = delete;
        ScalarConverter(const ScalarConverter &other) = delete;
        ScalarConverter &operator=(const ScalarConverter &other) = delete;

};

// methode fct hors scope analyse de type traitement 