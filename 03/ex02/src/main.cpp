/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 15:00:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
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

    FragTrap onizuka("onizuka");
}

void Test_constructorOrder_multiple() {
    std::cout << "## Testing the construction/destructiong order (multiple objects)" << std::endl;
    FragTrap onizuka("onizuka");
    FragTrap cresta("cresta");
}

void Test_allActions() {
    FragTrap onizuka("onizuka");
    
    onizuka.attack("cresta");
    onizuka.takeDamage(200);
    onizuka.beRepaired(20);
    onizuka.highFiveGuys();
}