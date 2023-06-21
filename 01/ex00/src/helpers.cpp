/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:59:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 12:59:30 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// On Stack
Zombie newZombie_bis( std::string name ) {
    
    Zombie zombie(name);
    return zombie;
}

void changeScope( Zombie *zomb ) {
    zomb->announce();                                                           //std::cout << "  ↳ at " << zomb << ": in changeScope()" << std::endl;
}

void changeScope_stack( Zombie zombie ) {
    zombie.announce();                                                          // std::cout << "  ↳ at " << &zombie << ": in changeScope()" << std::endl; std::cout << "  ↱ at " << &zombie << ": in changeScope()" << std::endl;
}