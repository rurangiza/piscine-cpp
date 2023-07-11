/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:22:14 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 10:38:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

UserInterface uiDiamond;

/****************************** CANONICAL FORM ********************************/

DiamondTrap::DiamondTrap( void )
: ClapTrap("nameless_clap_name")
{
    this->_name = "nameless";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage; 

    std::cout << CGREEN << "|| "
                  << std::setw(13) << std::left << "Constructing" << CRESET 
                  << CGRAY << "DiamondTrap " << CRESET
                  << CBOLD << "nameless" << CRESET
                  << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
: ClapTrap(name+"_clap_name")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << CGREEN << "|| "
                  << std::setw(13) << std::left << "Constructing" << CRESET
                  << CGRAY << "DiamondTrap " << CRESET
                  << CBOLD << this->_name << CRESET
                  << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << CRED << "|| "
              << std::setw(13) << std::left << "Destroying" << CRESET 
              << CGRAY << "DiamondTrap " << CRESET;
    if ( !_name.empty() ) {
        std::cout << CBOLD << this->_name << CRESET;
    } else {
        std::cout << CBOLD << "nameless" << CRESET;
    }
    std::cout << std::endl;
}

DiamondTrap&
DiamondTrap::operator= ( const DiamondTrap& rhs)
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

    this->_name = rhs._name;
    DiamondTrap::_hitPoints = rhs.FragTrap::_hitPoints;
    this->_energyPoints = rhs.ScavTrap::_energyPoints;
    this->_attackDamage = rhs.FragTrap::_attackDamage;

    return *this;
}