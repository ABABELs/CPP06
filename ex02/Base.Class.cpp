/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:25:04 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 10:58:55 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.Class.hpp"

Base::~Base()
{
    return ;
}

Base *Base::generate(void)
{
    int     random;

    std::srand(time(0));
    random = std::rand() % 3;
    if (random == 0)
        return (new A());
    else if (random == 1)
        return (new B());
    else
        return (new C());
}


void Base::identify(Base* p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "Class type A check by ptr" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "Class type B check by ptr" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "Class type C check by ptr" << std::endl;
    else
        std::cout << "Class type unknown check by ptr" << std::endl;
}

void Base::identify(Base &p)
{
    try
    {
         A &x = dynamic_cast<A &>(p);
        (void)x;
        std::cout << "Class type A check by ref" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        B &x = dynamic_cast<B &>(p);
        (void)x;
        std::cout << "Class type B check by ref" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        C &x = dynamic_cast<C &>(p);
        (void)x;
        std::cout << "Class type C check by ref" << std::endl;
    }
    catch (std::exception &e)
    { 
    }
}
