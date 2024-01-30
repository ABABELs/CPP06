/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:23:52 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 10:51:22 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <time.h>
# include "stdlib.h"
# include <exception>
# include <fstream>
# include <sstream>


class Base
{
    public:
        virtual ~Base();
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
