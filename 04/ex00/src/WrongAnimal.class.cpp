/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:52:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 14:02:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.class.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << _type << CRESET
            << std::endl;
}

// Copy Constructor
WrongAnimal::WrongAnimal( const WrongAnimal& src )
{ 
    _type = src._type;
    
    std::cout << CYELLOW << " | copying " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Deconstructor d
WrongAnimal::~WrongAnimal()
{
    std::cout << CRED << "|| " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Assignement Operator Overloading
WrongAnimal&
WrongAnimal::operator= ( const WrongAnimal &rhs )
{
    
    if ( this == &rhs ) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return ( *this );
    }

    std::cout << CYELLOW << " | assigning " << CRESET
              << CBLUE << rhs._type << CRESET
              << " to " << CBLUE << _type << CRESET
              << std::endl;
    
    _type = rhs._type;

    return *this;    
}

/***************************** MEMBER FUNCTIONS *******************************/

std::string
WrongAnimal::getType() const { return _type; }

void
WrongAnimal::makeSound() const
{
    std::cout << CBLUE << " • " << CRESET
              << CGRAY << _type << ": " << CRESET
              << "[unknown wrong_animal sound]\n";
}

/*************************** OPERATOR OVERLOADING *****************************/

std::ostream&
operator<< (std::ostream& os, const WrongAnimal& rhs)
{
    os << rhs.getType();
    
    return os;
}