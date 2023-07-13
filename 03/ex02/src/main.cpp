/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:00 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 15:46:59 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui2;

int main()
{
    ui2.header();

    FragTrap onizuka("onizuka");
    std::cout << onizuka;
    
    onizuka.attack("cresta");
    onizuka.takeDamage(30);
    onizuka.beRepaired(20);
    
    onizuka.highFiveGuys();

    return 0;
}
