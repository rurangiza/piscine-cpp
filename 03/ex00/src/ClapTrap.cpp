/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:15:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 09:53:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

UserInterface ui;

/* Constructors / Deconstructors */

ClapTrap::ClapTrap() {
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << CGREEN << "|| " << "Constructing" << CRESET 
            << CGRAY <<" ClapTrap " << CRESET
            << CBOLD << "nameless" << CRESET
            << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {

    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    
    std::cout << CGREEN << "|| " << "Constructing " << CRESET 
              << CGRAY << "ClapTrap " << CRESET
              << CBOLD << this->_name << CRESET
              << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) {

    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    
    std::cout << CYELLOW << " | " << "Copying " << CRESET
              << copy.getName()
              << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << CRED << "|| " <<  "Destroying" << CRESET 
              << " ClapTrap" << std::endl;
}

/*
 ***** 
 ***** Member functions
******
*/

void
ClapTrap::attack( const std::string& target ) {

    if (_energyPoints <= 0) {
        ui.err_attacking( _name );
        return ;
    }
    _energyPoints--;
    ui.attack( _name, target, _hitPoints );
}

void
ClapTrap::beRepaired( unsigned int amount ) {

    if (_energyPoints <= 0) {
        ui.err_healing( _name );
        return ;
    }
    _energyPoints--;
    _hitPoints += amount;
    ui.healing( _name, amount );
}

void
ClapTrap::takeDamage( unsigned int amount ) {

    if (_hitPoints == 0) {
        ui.err_takingDamage( _name );
        return ;
    }

    _hitPoints -= amount;
    _hitPoints = _hitPoints < 0 ? 0: _hitPoints; // make sure nrj never drops below zero
    ui.damage( _name, amount );
}

/* Accessors */
std::string
ClapTrap::getName() const {
    return _name;
}

int
ClapTrap::getHitPoints() const {
    return _hitPoints;
}

int
ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}

int
ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

/* Operator Overloading */

ClapTrap&
ClapTrap::operator=( const ClapTrap &rhs ) {
    
    if (this == &rhs) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
    }

    std::cout << CYELLOW << " | " << "Assigning " << CRESET
              << rhs.getName()
              << " to " << this->getName()
              << std::endl;
              
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    
}

std::ostream&
operator<<( std::ostream& os, const ClapTrap& obj ) {
    os << "Name...........: " << obj.getName() << std::endl;
    os << "Hit Points.....: " << obj.getHitPoints() << std::endl;
    os << "Energy Points..: "<< obj.getEnergyPoints() << std::endl;
    os << "Attack Damage..: " << obj.getAttackDamage() << std::endl;
    
    return os;
}