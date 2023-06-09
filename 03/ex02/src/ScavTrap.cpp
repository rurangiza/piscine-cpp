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

/****************************** CANONICAL FORM ********************************/

// Default Constructor
ScavTrap::ScavTrap( void )
: ClapTrap()
{
    this->_name = "nameless";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << CGREEN << "|| " << CRESET
              << CGRAY << "ScavTrap " << CRESET
              << CBOLD << "nameless" << CRESET
              << std::endl;
}

// Parameterized Constructor
ScavTrap::ScavTrap( std::string name )
: ClapTrap( name )
{
        this->_name = name;
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_attackDamage = 20;

        std::cout << CGREEN << "|| " << CRESET
                  << CGRAY << "ScavTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap( const ScavTrap& src )
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    
    std::cout << CYELLOW << " | " << CRESET
              << src.getName()
              << std::endl;
}

// Assignement Operator Overloading
ScavTrap&
ScavTrap::operator= ( const ScavTrap& rhs )
{
    if (this == &rhs) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return (*this);
    }

    std::cout << CYELLOW << " | " << CRESET
              << rhs.getName()
              << " to " << this->getName()
              << std::endl;
              
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;

    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << CRED << "|| "
              << std::setw(13) << std::left << CRESET 
              << CGRAY << "ScavTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;
}

/**************************** MEMBER FUNCTIONS *******************************/

void
ScavTrap::attack( const std::string& target ) {

    if (_energyPoints <= 0) {
        uiScav.err_attacking( _name );
        return ;
    }
    _energyPoints--;
    uiScav.attack( _name, target, _attackDamage, "ScavTrap");
}

void
ScavTrap::guardGate() {
    uiScav.guardMode( _name );
}