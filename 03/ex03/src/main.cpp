/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 09:11:53 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The diamond problem is an ambiguity that arises when
** two classes B and C inherit from A,
** and class D inherits from both B and C
**       A
**      / \
**     B   C  
**     \  /
**      D
*/

#include "../includes/DiamondTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

int main()
{
    D first; // D hérite de B et C, qui eux meme héritent de A

    DiamondTrap diamond("Saphir");

    return 0;
}