/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:36:46 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/26 03:58:42 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::parsing(std::string& data)
{
    if (data.length() == 1)
        return ;
    else if (data.length() > 1)
    {
        size_t signe = 0;
        int point = 0;
        if (data[0] == '+' || data[0] == '-')
            signe++;
        for (size_t i = signe; i < data.length() - 1; i++)
        {
            if (data[i] == '.' || std::isdigit(data[i]))
            {
                if (data[i] == '.')
                    point++;
                if (point > 1)
                    throw False_Arg();
            }
            else
                throw False_Arg();
        }
        if ((data[data.length() - 1] == 'f' && data.find('.') != std::string::npos ) || std::isdigit(data[data.length() - 1]))
            return ;
        else
            throw False_Arg();
    }
    else
        throw False_Arg();
}

void    ScalarConverter::int_sequence(std::string& data)
{
    int data_number;
    double check_range;
    check_range = std::atof(data.c_str());
    if (check_range > INT_MAX || check_range < INT_MIN)
        throw ScalarConverter::False_Arg();
    data_number = std::atoi(data.c_str());
    if (isprint(data_number))
        std::cout << "char: " << static_cast<char>(data_number) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << data_number << std::endl;
    std::cout << "float: " << static_cast<float>(data_number) << ".0f" <<  std::endl;
    std::cout << "double: " << static_cast<double>(data_number) << ".0" <<  std::endl;
}

void    ScalarConverter::float_sequence(std::string& data)
{
    float data_float;
    double check_range;
    check_range = std::atof(data.c_str());
    if (check_range > FLT_MAX || check_range < FLT_MIN)
        throw ScalarConverter::False_Arg();
    data_float = std::atof(data.c_str());
    if (isprint(data_float))
        std::cout << "char: " << static_cast<char>(data_float) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (check_range > INT_MAX || check_range < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(data_float) << std::endl;
    std::cout << "float: " << std::fixed << data_float << "f" <<  std::endl;
    std::cout << "double: "<<std::fixed <<  static_cast<double>(data_float) << std::endl;
}

void    ScalarConverter::double_sequence(std::string& data)
{
    double data_double;
    data_double = std::atof(data.c_str());
    if (isprint(data_double))
        std::cout << "char: " << static_cast<char>(data_double) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (data_double > INT_MAX || data_double < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(data_double) << std::endl;
        
    if (data_double > FLT_MAX || data_double < FLT_MIN)
        std::cout << "float: " << "impossible" << std::endl;
    else
        std::cout << "float: "  << std::fixed << static_cast<float>(data_double) << "f" <<  std::endl;
    std::cout << "double: " << std::fixed << data_double << std::endl;
}

void    ScalarConverter::convert(std::string& data)
{
    if (data.length() == 1)
    {
        int data_number = data[0];
        if (std::isdigit(data[0]))
            data_number = atoi(data.c_str());
        if (isprint(data_number))
            std::cout << "char: " <<static_cast<char>(data_number) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << data_number << std::endl;
        std::cout << "float: " << static_cast<float>(data_number) << ".0f" <<  std::endl;
        std::cout << "double: " << static_cast<double>(data_number) << ".0" << std::endl;
    }
    else
    {
        if (data.find('.') == std::string::npos)
            ScalarConverter::int_sequence(data);
        else if (data.find('.') != std::string::npos && data.find('f') == std::string::npos)
            ScalarConverter::double_sequence(data);
        else if (data.find('.') != std::string::npos && data.find('f') != std::string::npos)
            ScalarConverter::float_sequence(data);
    }
}
