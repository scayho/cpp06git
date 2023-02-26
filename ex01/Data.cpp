/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 04:08:10 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/26 04:14:14 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    data = 4;
    std::cout << "default constructor of data" << std::endl;
}
Data::~Data()
{
    std::cout << "default destructor of data" << std::endl;
    
}