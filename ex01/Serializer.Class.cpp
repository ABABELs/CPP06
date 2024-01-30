/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.Class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:04:42 by aabel             #+#    #+#             */
/*   Updated: 2024/01/29 14:13:20 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.Class.hpp"

Serializer::Serializer()
{
    return ;
}

Serializer::~Serializer()
{
    return ;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    std::cout << "Serializing..." << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    std::cout << "Deserializing..." << std::endl;
    return (reinterpret_cast<Data *>(raw));
}