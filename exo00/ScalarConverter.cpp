/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:40:28 by bloisel           #+#    #+#             */
/*   Updated: 2025/04/15 15:46:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"



int isChar(const std::string &litt)
{
    // chaine une seule lettre et une lettre de l'alphabet unsigned 0 a 256 pas de int negatif 
    if (litt.length() == 1 && std::isalpha(static_cast<unsigned char>(litt[0])))
        return 1;
    return -1;
}

int isFloat(const std::string &litt)
{
    // + ou - ignorer 
    // avoir un . 
    // point suivit de f ou F ou chiffre 
    // si point suivit autre chose non valide 
    bool has_dot = false;
    bool has_f = false;
    size_t i = 0;
    if (litt[i] == '-' || litt[i] == '+')
        i++;
    while (litt[i] != '\0')
    {
        if (std::isdigit(litt[i]))
        {
            i++;
            continue;
        }
        if (litt[i] == '.')
        {
            if (has_dot)
                return -1;
            has_dot = true;
            if (litt[i + 1] == '\0' || !std::isdigit(litt[i + 1]))
                return -1;

            i++;
            continue;
        }
        if ((litt[i] == 'f' || litt[i] == 'F') && i == litt.length() - 1)
        {
            has_f = true;
            i++;
            continue;
        }
        return -1;
    }
    if (has_dot && has_f)
        return 1;

    return -1;
}

int isInt(const std::string &litt)
{
    // verifier signe 
    // verifier que mon int n'est pas plus grand que un int max 
    // verifier que tout les char de ma string sont des nombres 
    // parcourir ma chaine de char 
    // si ma chaine est plus grande que la limite max d 'un long int 
    int long long a;
    a = atoll(litt.c_str());
    size_t i;
    i = 0;
    size_t j;
    j = 0;
    if (litt[0] == '+' || litt[0] == '-')
    {
        i++;
    }
    while(litt[i] == '0')
    {
        i++;
        j++;
    }
    while (litt[i] != '\0')
    {
        if((i - j) > 10  || litt[i] != isdigit(litt[i]))
            return -1;
        i++;
    }
    if (std::numeric_limits<int>::max() <= a || std::numeric_limits<int>::min() >= a)
        return -1;
    return 1;
}

int isDouble(const std::string &litt)
{
    bool has_dot = false;
    size_t i = 0;

    if (litt[i] == '-' || litt[i] == '+')
        i++;

    while (i < (litt.length()))
    {
        if (std::isdigit(litt[i]))
            i++;
        else if (litt[i] == '.')
        {
            if (has_dot)
                return -1;
            has_dot = true;
            if (i + 1 >= (litt.length()) || !std::isdigit(litt[i + 1]))
                return -1;
            i++;
        }
        else 
           return -1;
    }
    if (has_dot == 1)
        return 1;
    else
        return -1;
}



void handleDouble(const std::string &litt)
{
    double n;
    n = std::stod(litt);
    //(litt.c_str());

    char c;
    c = static_cast<char>(n);
    
    if ((c >= 0 && c < 32) || c == 127)
    {
        std::cout << "char: " <<"Non Displayable" << std::endl;
    }
    else if (c > 127 || c < 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else 
        std::cout << "char: " << "'" << c << "'" << std::endl;
    if ((litt.length() < 10) && (std::numeric_limits<long long int>::max() >= n || std::numeric_limits<long long int>::min() <= n))
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    else 
        std::cout << "int: " << "impossible" << std::endl; 
    if (std::fabs(n) <= std::numeric_limits<float>::max())
    {
        std::cout <<"float: " << static_cast<float>(n) << "f" << std::endl;
    }
    else 
        std::cout << "float: " << "impossible" << std::endl; 
    if (std::fabs(n) <= std::numeric_limits<double>::max())
    {
        std::cout <<"double: " << (n) << std::endl;
    }
    else 
        std::cout << "double: " << "impossible" << std::endl; 
}



void handleFloat(const std::string &litt)
{
    float n;
    n = std::stof(litt);
    //(litt.c_str());

    char c;
    c = static_cast<char>(n);
    
    if ((c >= 0 && c < 32) || c == 127)
    {
        std::cout << "char: " <<"Non Displayable" << std::endl;
    }
    else if (c > 127 || c < 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else 
        std::cout << "char: " << "'" << c << "'" << std::endl;
    if ((litt.length() < 10) && (std::numeric_limits<long long int>::max() >= n || std::numeric_limits<long long int>::min() <= n))
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    else 
        std::cout << "int: " << "impossible" << std::endl; 
    if (std::fabs(n) <= std::numeric_limits<float>::max())
    {
        std::cout <<"float: " << (n) << "f" << std::endl;
    }
    else 
        std::cout << "float: " << "impossible" << std::endl; 
    if (std::fabs(n) <= std::numeric_limits<double>::max())
    {
        std::cout <<"double: " << static_cast<double>(n) << std::endl;
    }
    else 
        std::cout << "double: " << "impossible" << std::endl; 


}


void handleInt(const std::string &litt)
{
    long long int n;
    n = atoll(litt.c_str());

    char c;
    c = static_cast<char>(n);
    
    if ((c >= 0 && c < 32) || c == 127)
    {
        std::cout << "char: " <<"Non Displayable" << std::endl;
    }
    else if (c > 127 || c < 0)
    {
        std::cout << "char: " << "impossible" << std::endl;
    }
    else 
        std::cout << "char: " << "'" << c << "'" << std::endl; 
    if ((litt.length() < 10) && (std::numeric_limits<long long int>::max() >= n || std::numeric_limits<long long int>::min() <= n))
        std::cout << "int: " << n << std::endl;
    else 
        std::cout << "int: " << "impossible" << std::endl;
    // eviter undefined behavior ou les casts pertes de preciscion utilise fabs ou abs pour la distance a zero pas la vlr brut
    // std::abs pour int et long , fabs pour float et double 
    if (std::abs(n) <= std::numeric_limits<float>::max())
    {
        std::cout <<"float: " << static_cast<float>(n) << "f" << std::endl;
    }
    else 
        std::cout << "float: " << "impossible" << std::endl; 
    if (std::abs(n) <= std::numeric_limits<double>::max())
    {
        std::cout <<"double: " << static_cast<double>(n) << std::endl;
    }
    else 
        std::cout << "double: " << "impossible" << std::endl; 
}

void handleChar(const std::string &litt)
{
    // a voir ascii to int pour reccuperer et faire ma conversion 
    // int n;
    // n = atoi(litt.c_str());
    // char c;
    // c = static_cast<char>(n);
    char e;
    e = litt[0];
    if (litt.length() == 1)
    {
        std::cout << "char: " << "'" << e << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(e) << std::endl;
        std::cout << "float: " << static_cast<float>(e) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(e) << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

int isSpe(const std::string &litt)
{
    if (litt == "nan" || litt == "-inff" || litt == "+inff"
        || litt == "-inf" || litt == "+inf" || litt == "nanf")
    {
        std::cout << "char: " <<"impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        if (litt == "nan" || litt == "nanf")
        {
            std::cout << "float: " << "nanf" << std::endl;
            std::cout << "double: " << "nan" << std::endl;
        }
        if (litt == "+inf" || litt == "+inff")
        {
            std::cout << "float: " << "+inff" << std::endl;
            std::cout << "double: " << "+inf" << std::endl; 
        }
        if (litt == "-inf" || litt == "-inff")
        {
            std::cout << "float: " << "-inff" << std::endl;
            std::cout << "double: " << "-inf" << std::endl; 
        }
        return 0;
    }
    return -1;
}


void ScalarConverter::convert(const std::string &litt)
{
    //std::numeric_limits<float>::max()
    // sensee recevoir un nbr toujours 
    // si autre chose que un nombre si chaine vide 
    // impossible 
    std::cout << std::fixed << std::setprecision(1);
    if (litt.empty())
    {
        std::cout << "error : empty string " << std::endl;
        ;
    }
    if (isSpe(litt) == 1)
    {
        ;
    }
    else if (isChar(litt) == 1)
    {
        // std::cout << "test" << std::endl;
        handleChar(litt);
    }
    else if (isInt(litt) == 1)
    {
        handleInt(litt);
    }
    else if (isFloat(litt) == 1)
    {
        handleFloat(litt);
        // std::cout << "its a float " << std::endl;
    }
    else if (isDouble(litt) == 1)
    {
        // int i = isDouble(litt);
        // std::cout << "mon i " << i << std::endl;
        handleDouble(litt);
    }
}

// float f;
    // f = std::atof(litt.c_str());
    
    // double d;
    // d = static_cast<double>(f);


// +inf = un int ou un double superieur a la limite int/double
// -inf = un int ou un double inferieur a la limiite int/double

// +inff = un float superieur a la limite float
// -inff = un float inferieur a la limite float

// nan = une chaine de caractere qui n'a pas seulement des
// nombres ou sans nombres

// impossible que pour char et int  le rest compris ente inf + , - , et nan ;

// char impossible que si > 127 

// convert from string to actual type 
    // explicit convert en tout les types 4 dbl,float,int,char
    // print 

// str::tol str::of str::tod 

 // char verifier taill .lenght .printable .isdigit 