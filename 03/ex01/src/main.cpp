/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 15:46:16 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

int main()
{
    ui2.header();
    
    ScavTrap vegeta("vegeta");
    std::cout << vegeta;
    
    vegeta.attack("sangoku");
    vegeta.takeDamage(100);
    vegeta.beRepaired(10);
    
    vegeta.guardGate();

    return 0;
}
