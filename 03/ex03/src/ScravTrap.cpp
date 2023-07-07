/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:21:19 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 13:59:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScravTrap.hpp"
    
UserInterface uiScrav;

ScravTrap::ScravTrap( std::string name ) {
        _name = name;
        _hitPoints = 100;
        _energyPoints = 50;
        _attackDamage = 20;
        
        std::cout << CGREEN << "|| "
                  << std::setw(13) << std::left << "Constructing" << CRESET 
                  << CGRAY << "ScravTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}
ScravTrap::~ScravTrap() {
    std::cout << CRED << "|| "
              << std::setw(13) << std::left << "Destroying" << CRESET 
              << CGRAY << "ScravTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;

}

void
ScravTrap::guardGate() {
    uiScrav.guardMode( _name );
}