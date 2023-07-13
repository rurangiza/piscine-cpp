/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:22:14 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 16:13:08 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

UserInterface uiDiamond;

/****************************** CANONICAL FORM ********************************/

// Default Constructor
DiamondTrap::DiamondTrap( void )
: ClapTrap("nameless_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = "nameless";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << CGREEN << "|| " << CRESET
                  << CGRAY << "DiamondTrap " << CRESET
                  << CBOLD << "nameless" << CRESET
                  << std::endl;
}

// Parameterized Constructor
DiamondTrap::DiamondTrap( std::string name )
: ClapTrap( name+"_clap_name" ), ScavTrap( name ), FragTrap( name )
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << CGREEN << "|| " << CRESET
                  << CGRAY << "DiamondTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& src )
{   
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    std::cout << CYELLOW << " | (C) " << CRESET
              << src.getName()
              << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << CRED << "|| " << CRESET
              << CGRAY << "DiamondTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;
}

// Assignement Operator Overloading
DiamondTrap&
DiamondTrap::operator= ( const DiamondTrap& rhs)
{
    if (this == &rhs) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return (*this);
    }

    std::cout << CYELLOW << " | (A) " << CRESET
              << rhs.getName()
              << " to " << this->getName()
              << std::endl;

    this->_name = rhs._name;
    DiamondTrap::_hitPoints = rhs.FragTrap::_hitPoints;
    this->_energyPoints = rhs.ScavTrap::_energyPoints;
    this->_attackDamage = rhs.FragTrap::_attackDamage;

    return *this;
}

/**************************** MEMBER FUNCTIONS *******************************/

void
DiamondTrap::whoAmI() {
    uiDiamond.who( this->_name );
}