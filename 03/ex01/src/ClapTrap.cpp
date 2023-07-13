/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:35:06 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 18:53:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

UserInterface ui;

/****************************** CANONICAL FORM ********************************/

// Default Constructor
ClapTrap::ClapTrap()
: _name("nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << CGREEN << "|| " << "Constructing" << CRESET 
            << CGRAY <<" ClapTrap " << CRESET
            << CBOLD << "nameless" << CRESET
            << std::endl;
}

// Parameterized Constructor
ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{   
    std::cout << CGREEN << "|| " << "Constructing " << CRESET 
              << CGRAY << "ClapTrap " << CRESET
              << CBOLD << this->_name << CRESET
              << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap( const ClapTrap& src )
: _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{   
    std::cout << CYELLOW << " | " << "Copying " << CRESET
              << src.getName()
              << std::endl;
}

// Deconstructor d
ClapTrap::~ClapTrap() {
    std::cout << CRED << "|| " <<  "Destroying" << CRESET 
              << CGRAY << "   ClapTrap " << CRESET
              << CBOLD << _name << CRESET << " "
              << std::endl;
}

// Assignement Operator Overloading
ClapTrap&
ClapTrap::operator= ( const ClapTrap &rhs ) {
    
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

/**************************** MEMBER FUNCTIONS *******************************/

void
ClapTrap::attack( const std::string& target ) {

    if (_energyPoints <= 0) {
        ui.err_attacking( _name );
        return ;
    }
    _energyPoints--;
    ui.attack( _name, target, _attackDamage, "ClapTrap");
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

    if ( _hitPoints <= 0 || (_hitPoints - amount) <= 0 ) {
        ui.err_takingDamage( _name );
        return ;
    }
    _hitPoints -= amount;
    ui.damage( _name, amount );
}

std::string
ClapTrap::getName() const { return _name; }

int
ClapTrap::getHitPoints() const { return _hitPoints; }

int
ClapTrap::getEnergyPoints() const { return _energyPoints; }

int
ClapTrap::getAttackDamage() const { return _attackDamage; }

/* Operator Overloading */

std::ostream&
operator<<( std::ostream& os, const ClapTrap& obj ) {
    os << "Name...........: " << obj.getName() << std::endl;
    os << "Hit Points.....: " << obj.getHitPoints() << std::endl;
    os << "Energy Points..: "<< obj.getEnergyPoints() << std::endl;
    os << "Attack Damage..: " << obj.getAttackDamage() << std::endl;
    
    return os;
}