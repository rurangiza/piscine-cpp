/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:51:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 10:52:14 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.class.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
WrongCat::WrongCat()
{
    _type = "wrongcat";
    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << _type << CRESET
            << std::endl;
}

// Copy Constructor
WrongCat::WrongCat( const WrongCat& src )
{ 
    _type = src._type;
    
    std::cout << CYELLOW << " | copying " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Deconstructor d
WrongCat::~WrongCat()
{
    std::cout << CRED << "|| " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Assignement Operator Overloading
WrongCat&
WrongCat::operator= ( const WrongCat &rhs )
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
WrongCat::getType() const { return _type; }

void
WrongCat::makeSound() const
{
    std::cout << CBLUE << " • " << CRESET
              << CGRAY << _type << ": " << CRESET
              << "meowoof\n";
}

/*************************** OPERATOR OVERLOADING *****************************/

std::ostream&
operator<< (std::ostream& os, const WrongCat& rhs)
{
    os << rhs.getType();
    
    return os;
}