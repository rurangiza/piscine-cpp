/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 15:45:26 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

int main()
{
    ui2.header();
        
    ClapTrap sasuke("Sasuke");
    std::cout << sasuke;

    sasuke.attack("Naruto");
    sasuke.takeDamage(2000);
    sasuke.beRepaired(10);

    return 0;
}