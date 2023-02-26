/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:53:30 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/26 04:26:47 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <iomanip>
#include <float.h>
class ScalarConverter
{
    public :
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter &a);
    static    void convert(std::string& data);
    static    void    parsing(std::string& data);
    static void    int_sequence(std::string& data);
    static void    float_sequence(std::string& data);
    static void    double_sequence(std::string& data);
    class False_Arg :  public std::exception
    {
        public:
            const char *what() const throw()
            {
                return ("invalide argument !! ");
            }
    };
    class Impossible_Convert :  public std::exception
    {
        public:
            const char *what() const throw()
            {
                return ("the convertion couldn't be happened !! ");
            }
    };
};


#endif