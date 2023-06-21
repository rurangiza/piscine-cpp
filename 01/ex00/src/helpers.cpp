/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:59:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 14:11:52 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// On Stack
Zombie newZombie_bis( std::string name ) {
    
    Zombie zombie(name);
    return zombie;
}

void changeScope_heap( Zombie *zombie ) {
    zombie->announce();                                                         //std::cout << CBLUE << "  ↳ at " << CRESET;
                                                                                //std::cout << zombie << std::endl;
}

void changeScope_stack( Zombie zombie ) {
    zombie.announce();                                                          //std::cout << CBLUE << "  ↳ at " << CRESET << &zombie << std::endl; std::cout << CBLUE << "  ↱ at " << CRESET << &zombie << std::endl;
}