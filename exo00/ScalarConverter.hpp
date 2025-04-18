/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:40:32 by bloisel           #+#    #+#             */
/*   Updated: 2025/04/15 15:47:20 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        // ScalarConverter() = delete;
        // ~ScalarConverter() = delete;
        // ScalarConverter(const ScalarConverter &other) = delete;
        // ScalarConverter &operator=(const ScalarConverter &other) = delete;
        ScalarConverter() {};
        ~ScalarConverter() {};
        // ScalarConverter(const ScalarConverter &other) = delete ;
        //ScalarConverter &operator=(const ScalarConverter &other) = delete;
        ScalarConverter &operator=(const ScalarConverter &other);
        ScalarConverter(const ScalarConverter &other);
};

int isSpe(const std::string &litt);
int isChar(const std::string &litt);
int isInt(const std::string &litt);
int isFloat(const std::string &litt);
int isDouble(const std::string &litt);


void handleChar(const std::string &litt);
void handleInt(const std::string &litt);
void handleFloat(const std::string &litt);
void handleDouble(const std::string &litt);
// methode fct hors scope analyse de type traitement 