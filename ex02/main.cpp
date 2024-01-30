/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:10:20 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 10:52:54 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.Class.hpp"

int main(void)
{
	Base	Go;
	Base	*test;

	test = Go.generate();
	Go.identify(test);
	Go.identify(*test);
	delete test;
	return (0);
}