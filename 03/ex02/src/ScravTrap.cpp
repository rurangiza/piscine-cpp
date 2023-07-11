/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:21:19 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 13:45:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
    
UserInterface uiScav;

ScavTrap::ScavTrap( void )
{
    _name = "";
    std::cout << CGREEN << "|| "
              << std::setw(13) << std::left << "Constructing" << CRESET 
              << CGRAY << "ScavTrap " << CRESET
              << CBOLD << "nameless" << CRESET
              << std::endl;
}

ScavTrap::ScavTrap( std::string name )
: ClapTrap(name)
{
        this->_name = name;
        std::cout << CGREEN << "|| "
                  << std::setw(13) << std::left << "Constructing" << CRESET 
                  << CGRAY << "ScavTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src )
: ClapTrap(src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    
    std::cout << CYELLOW << " | " << "Copying " << CRESET
              << src.getName()
              << std::endl;
}

ScavTrap&
ScavTrap::operator= ( const ScavTrap& rhs )
{
    if (this == &rhs) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return (*this);
    }

    std::cout << CYELLOW << " | " << "Assigning " << CRESET
              << rhs.getName()
              << " to " << this->getName()
              << std::endl;
              
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;

    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << CRED << "|| "
              << std::setw(13) << std::left << "Destroying" << CRESET 
              << CGRAY << "ScavTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;
}

void
ScavTrap::guardGate() {
    uiScav.guardMode( _name );
}