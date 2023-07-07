/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:55 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 14:10:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/UserInterface.hpp"

void
UserInterface::header() {

    std::system("clear");
    std::cout << std::endl << "INFO: ";
    std::cout << CGREEN << "||" << CRESET << " constructor " // constructor
              << CRED << "||" << CRESET << " destructor "// destructor
              << CYELLOW << "|" << CRESET << " copy/assignement "// destructor
              << CBLUE << "•" << CRESET << " actions"// player actions
              << std::endl << std::endl;
}

void
UserInterface::iScope( const std::string& funcName, const int& indent ) const {
    
    std::string str = "";
    for (int i = 0; i < indent; i++) {
        str += " ";
    }
    str += "_start ";
    str += "(" + funcName + ")";
    std::cout << std::endl << str << std::endl;
}

void
UserInterface::oScope( const std::string& funcName, const int& indent ) const {
    
    std::string str = "";
    for (int i = 0; i < indent; i++) {
        str += " ";
    }
    str += "_end ";
    str += "(" + funcName + ")";
    std::cout << str << std::endl;
}

// -----------------------------------------------------------------------------

void
UserInterface::healing( const std::string& name, const unsigned int& amount) const {
    std::cout << CBLUE << " • " << CRESET
                << CGRAY << "ClapTrap " << CRESET
                << CBOLD << name << CRESET << ": "
                << "is healing. " << amount << "pts gained"
                << std::endl;
}

void
UserInterface::attack( const std::string& name, const std::string& target, const int& hitPoints ) const {
    std::cout << CBLUE << " • " << CRESET
            << CGRAY << "ClapTrap " << CRESET
            << CBOLD << name << CRESET
            << ": attacked " << target << ", "
            << "causing " << hitPoints << "pts of damage"
            << std::endl;
}

void
UserInterface::damage( const std::string& name, const unsigned int& amount ) const {
    std::cout << CBLUE << " • " << CRESET
                << CGRAY << "ClapTrap " << CRESET
                << CBOLD << name << CRESET << ": "
                << "was attacked. " << amount << "pts lost"
                << std::endl;
}

void
UserInterface::err_healing( const std::string& name ) const {
    std::cout << CBLUE << " • " << CRESET
                  << CGRAY << "ClapTrap " << CRESET << name << ": "
                  << "can't heal. Not enough energy points" << std::endl;
}

void
UserInterface::err_attacking( const std::string& name ) const {
    std::cout << CBLUE << " • " << CRESET
                  << CGRAY << "ClapTrap " << CRESET
                  << CBOLD << name << CRESET
                  << ": Can't attack. Not enough energy points."
                  << std::endl;
}

void
UserInterface::err_takingDamage( const std::string& name ) const {
    std::cout << CBLUE << " • " << CRESET
                  << "ClapTrap " << name << ": "
                  << "is already dead"
                  << std::endl;
}
