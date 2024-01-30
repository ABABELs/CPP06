/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.Class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:30:12 by aabel             #+#    #+#             */
/*   Updated: 2024/01/29 13:56:10 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.Class.hpp"

ScalarConverter::ScalarConverter()
{
    return ;
}

ScalarConverter::~ScalarConverter()
{
    return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
    return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}


void toInt(char *str)
{
    int i = std::atoi(str);
    if (i > 32 && i < 127)
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    else if (i >= -128 && i <= 255)
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: Overflow" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void toFloat(char *str)
{
    float f = std::atof(str);
    if (f > 32 && f < 127)
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    else if (f >= -128 && f <= 255)
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: Overflow" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << std::fixed << f << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void toDouble(char *str)
{
    double d = std::atof(str);
    if (d > 32 && d < 127)
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else if (d >= -128 && d <= 255)
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: Overflow" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << d << std::endl;
}

void toChar(char *str)
{
    char c = *str;
    if (c > 32 && c < 127)
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "Char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: "<< std::fixed << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void others(char *str)
{
    if (!std::strcmp(str, "nan") || !std::strcmp(str, "nanf"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (!std::strcmp(str, "+inf") || !std::strcmp(str, "+inff"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (!std::strcmp(str, "-inf") || !std::strcmp(str, "-inff"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::convert(char *str)
{
    if (IsInt(str))
        toInt(str);
    else if (IsFloat(str))
        toFloat(str);
    else if (IsDouble(str))
        toDouble(str);
    else if (IsChar(str))
        toChar(str);
    else
        others(str);
}