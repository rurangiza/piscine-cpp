/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:03:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 21:26:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.class.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
Animal::Animal()
: _type( "animal" )
{
    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << _type << CRESET
            << std::endl;
}

// Copy Constructor
Animal::Animal( const Animal& src )
{   
    std::cout << CYELLOW << " | (C) " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Deconstructor d
Animal::~Animal()
{
    std::cout << CRED << "|| " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Assignement Operator Overloading
Animal&
Animal::operator= ( const Animal &rhs )
{
    
    if ( this == &rhs ) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return ( *this );
    }

    std::cout << CYELLOW << " | (A) " << CRESET
              << CBLUE << rhs._type << CRESET
              << " to " << CBLUE << _type << CRESET
              << std::endl;
    
    _type = rhs._type;

    return *this;    
}

/***************************** MEMBER FUNCTIONS *******************************/

std::string
Animal::getType() const { return _type; }

void
Animal::makeSound() const
{
    std::cout << CGRAY << _type << ": " << CRESET
              << "[unknown sound]\n";
}

/*************************** OPERATOR OVERLOADING *****************************/

std::ostream&
operator<< (std::ostream os, const Animal& rhs)
{
    os << rhs.getType();
    
    return os;
}