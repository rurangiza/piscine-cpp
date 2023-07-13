/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 11:45:23 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

void Test_constructors();
void Test_validArgs();
void Test_invalidArgs();

int main()
{
    ui2.header();
    
    Test_constructors();
    std::cout << std::endl;
    
    Test_validArgs();
    std::cout << std::endl;
    
    Test_invalidArgs();

    return 0;
}

void Test_constructors() {
    ClapTrap naruto("Naruto");
    ClapTrap narutoClone(naruto);
    narutoClone = naruto;
}

void Test_validArgs() {
    ClapTrap sasuke("Sasuke");

    sasuke.attack("Naruto");
    sasuke.takeDamage(2000);
    sasuke.beRepaired(10);
}

void Test_invalidArgs() {
    ;
}