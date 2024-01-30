/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBro.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:43:12 by aabel             #+#    #+#             */
/*   Updated: 2024/01/29 12:42:20 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigBro.hpp"

int IsInt(char *str)
{
    int i = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[++i])
        if (!isdigit(str[i]))
            return 0;
    return 1;
}

int IsFloat(char *str)
{
    int i = -1;
    while ((size_t)++i < strlen(str) - 1)
        if (!isdigit(str[i]) && str[i] != '.')
            return 0;
    if (str[i] == 'f')
        return 1;
    else
        return 0;
}

int IsDouble(char *str)
{
    for (int i = -1; str[++i];)
        if (!isdigit(str[i]) && str[i] != '.')
            return 0;
    return 1;
}

int IsChar(char *str)
{
    if (strlen(str) == 1)
        return 1;
    else
        return 0;
}