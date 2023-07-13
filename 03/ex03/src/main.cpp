/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 16:18:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

int main()
{
    ui2.header();

    DiamondTrap gogeta("Gogeta");
    
    std::cout << gogeta;

    gogeta.attack("Janemba");
    gogeta.takeDamage(10);
    gogeta.beRepaired(80);
    
    gogeta.guardGate();
    gogeta.highFiveGuys();
    
    gogeta.whoAmI();

    return 0;
}
