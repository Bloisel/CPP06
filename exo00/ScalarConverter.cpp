#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &litt)
{  
     

    std::cout << std::fixed << std::setprecision(1);

    int n;
    n = std::atoi(litt.c_str());

    char c;
    c = static_cast<char>(n);

    float f;
    f = std::atof(litt.c_str());
    
    double d;
    d = static_cast<double>(f);

    if (c < 32 || c > 126)
    {
        std::cout << "char: " <<"Non Displayable" << std::endl;
    }
    else
    {
        std::cout << "char: " << c << std::endl;
    } 
    std::cout << "int: " << n << std::endl;
    std::cout <<"float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    // quel type 
    // convert from string to actual type 
    // explicit convert en tout les types 4 dbl,float,int,char
    // print 
}
