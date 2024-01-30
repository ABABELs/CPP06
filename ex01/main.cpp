/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:15:48 by aabel             #+#    #+#             */
/*   Updated: 2024/01/29 14:20:37 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.Class.hpp"

int main(void)
{
    Data        Who;
    Data        *ptr = NULL;
    uintptr_t   adress = 0;

    Who.name = "BABELs";
    Who.age = 42;
    std::cout << Who.name << " is " << Who.age << " years old." << std::endl;
    std::cout << "Adress before serialize: " << &Who << std::endl;
    adress = Serializer::serialize(&Who);
    std::cout << "Adress after serialize: " << adress << std::endl;
    ptr = Serializer::deserialize(adress);
    std::cout << "Adress after deserialize: " << ptr << std::endl;
    std::cout << ptr->name << " is " << ptr->age << " years old." << std::endl;
    return 0;
}