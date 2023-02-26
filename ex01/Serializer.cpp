/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 04:08:02 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/26 04:16:25 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "default constructor of serializer" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "default destructor of serializer" << std::endl;
    
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast <Data *>(raw));   
}