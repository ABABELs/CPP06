/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.Class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:00:34 by aabel             #+#    #+#             */
/*   Updated: 2024/01/29 14:10:50 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
    std::string name;
    int age;
};

class Serializer
{
    public:
        ~Serializer();
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);

    private:
        Serializer();
        Serializer(Serializer const & src);
        Serializer & operator=(Serializer const & rhs);
};

#endif