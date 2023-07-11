/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:36:48 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 15:36:12 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

UserInterface uiFrag;

FragTrap::FragTrap( void ) {
    _name = "nameless";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    
    std::cout << CGREEN << "|| "
                << std::setw(13) << std::left << "Constructing" << CRESET 
                << CGRAY << "FragTrap " << CRESET
                << CBOLD << this->_name << CRESET
                << std::endl;
}

FragTrap::FragTrap( std::string name )
{
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

FragTrap::FragTrap( const FragTrap& src )
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

FragTrap&
FragTrap::operator= ( const FragTrap& rhs) {
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

void
FragTrap::highFiveGuys() {
    uiFrag.highFive( this->_name );
}