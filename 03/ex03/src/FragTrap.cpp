/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:36:48 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 14:58:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

UserInterface uiFrag;

FragTrap::FragTrap( std::string name ) {
        _name = name;
        _hitPoints = 100;
        _energyPoints = 100;
        _attackDamage = 30;
        
        std::cout << CGREEN << "|| "
                  << std::setw(13) << std::left << "Constructing" << CRESET 
                  << CGRAY << "FragTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << CRED << "|| "
              << std::setw(13) << std::left << "Destroying" << CRESET 
              << CGRAY << "FragTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;

}

void
FragTrap::highFiveGuys() {
    uiFrag.highFive( this->_name );
}