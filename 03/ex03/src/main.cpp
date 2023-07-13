/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 18:47:40 by arurangi         ###   ########.fr       */
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

void Test_diamond_problem();
void Test_construction_order();
void Test_all_actions();

UserInterface ui2;

int main()
{
    ui2.header();

    Test_diamond_problem();
    std::cout << std::endl;
    
    Test_construction_order();
    std::cout << std::endl;
    
    Test_all_actions();
    std::cout << std::endl;

    return 0;
}

void Test_diamond_problem() {
    std::cout << "# understand diamond problem" << std::endl;
    
    D obj; // D hérite de B et C, qui eux meme héritent de A
}

void Test_construction_order() {
    std::cout << "# check in which order the classes are called" << std::endl;
    
    DiamondTrap diamond("Saphir");
}

void Test_all_actions() {
    std::cout << "# check all possible actions" << std::endl;

    DiamondTrap diamond("Gogeta");

    diamond.whoAmI();
    diamond.attack("Janemba");
    diamond.takeDamage(100);
    diamond.beRepaired(80);
}