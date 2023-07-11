/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 15:24:06 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

void Test_constructorOrder_single();
void Test_constructorOrder_multiple();
void Test_allActions();

///////////////////////////////////////////////////////////////////////////////

int main()
{
    ui2.header();

    Test_constructorOrder_single();
    std::cout << std::endl;

    Test_constructorOrder_multiple();
    std::cout << std::endl;
    
    Test_allActions();
    std::cout << std::endl;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////

void Test_constructorOrder_single() {
    std::cout << "## Testing the construction/destructiong order" << std::endl;
    
    ScavTrap sangoku("sangoku");
}

void Test_constructorOrder_multiple() {
    std::cout << "# Testing the construction/destructiong order (multiple objects)" << std::endl;
    
    ScavTrap sangoku("sangoku");
    ScavTrap vegeta("vegeta");
}

void Test_allActions() {
    std::cout << "# Testing all actions possible by ScavTrap" << std::endl;
    
    ScavTrap vegeta("vegeta");
    
    vegeta.attack("sangoku");
    vegeta.takeDamage(100);
    vegeta.beRepaired(10);
    vegeta.guardGate();
}