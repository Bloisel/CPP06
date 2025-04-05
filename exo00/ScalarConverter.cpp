#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &litt)
{
    //std::numeric_limits<float>::max()
    // sensee recevoir un nbr toujours 
     // si autre chose que un nombre si chaine vide 
     // impossible 

    std::cout << std::fixed << std::setprecision(1);

    int n;
    n = std::atoi(litt.c_str());

    char c;
    c = static_cast<char>(n);
    //std::cout << "Mon c = " << c <<std::endl;

    float f;
    f = std::atof(litt.c_str());
    
    double d;
    d = static_cast<double>(f);
    
    if (litt == "nan" || litt == "-inff" || litt == "+inff"
        || litt == "-inf" || litt == "+inf" || litt == "nanf")
    {
        std::cout << "char: " <<"impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout <<"float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        return;
    }
    
    if ((c > 0 && c < 32) || c == 127)
    {
        std::cout << "char: " <<"Non Displayable" << std::endl;
    }
    else if (c > 127)
    {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else if ((litt != "nanf" && litt != "nan" ) 
        && litt.length() > 3)
    // si char est une chaine de caractere par exemple att float 13.45 
    // else if ()
    // {
        
    // }
    //else if
    // {
    //     std::cout << "char: " << c << std::endl;
    // }
    std::cout << "int: " << n << std::endl;
    std::cout <<"float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    // quel type 
    // convert from string to actual type 
    // explicit convert en tout les types 4 dbl,float,int,char
    // print 
}

// +inf = un int ou un double superieur a la limite int/double
// -inf = un int ou un double inferieur a la limiite int/double

// +inff = un float superieur a la limite float
// -inff = un float inferieur a la limite float

// nan = une chaine de caractere qui n'a pas seulement des
// nombres ou sans nombres

// impossible que pour char et int  le rest compris ente inf + , - , et nan ;

// char impossible que si > 127 


// str::tol str::of str::tod 

 // char verifier taill .lenght .printable .isdigit 