/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 04:08:06 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/26 04:22:22 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data;
    Serializer s;
    uintptr_t ptr_test;
    ptr_test = s.serialize(ptr);
    std::cout << ptr << std::endl;
    std::cout << ptr->data << std::endl;
    std::cout << ptr_test << std::endl;
    Data *next_ptr = s.deserialize(ptr_test);
    std::cout << next_ptr << std::endl;
    std::cout << next_ptr->data << std::endl;
    
}