/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:15:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/05 17:43:43 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/* Constructors / Deconstructors */

ClapTrap::ClapTrap() {
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "Constructing: ClapTrap" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    
    std::cout << "Constructing: ClapTrap" << std::endl;
}

ClapTrap&
ClapTrap::operator = ( const ClapTrap &rhs ) {
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    
    std::cout << "Assigning: ClapTrap" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    
    std::cout << "COnstructing by Copy: ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destroying: ClapTrap" << std::endl;
}

/* Member functions */

void
ClapTrap::attack( const std::string& target ) {
    std::cout << "ClapTrap " << this->_name
              << "attacks " << target << ", "
              << "causing " << this->_hitPoints << "points of damage!"
              << std::endl;
}

void
ClapTrap::takeDamage( unsigned int amount ) {
    ;
}

void
ClapTrap::beRepaired( unsigned int amount ) {
    ;
}