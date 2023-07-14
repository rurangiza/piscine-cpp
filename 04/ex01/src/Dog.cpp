/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:32:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 14:02:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();

    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << _type << CRESET
            << std::endl;
}

// Copy Constructor
Dog::Dog( const Dog& src )
{ 
    _type = src._type;
    
    std::cout << CYELLOW << " | copying " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Deconstructor d
Dog::~Dog()
{
    delete _brain;

    std::cout << CRED << "|| " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Assignement Operator Overloading
Dog&
Dog::operator= ( const Dog &rhs )
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
Dog::getType() const { return _type; }

void
Dog::makeSound() const
{
    std::cout << CBLUE << " • " << CRESET
              << CGRAY << _type << ": " << CRESET
              << "woof\n";
}

/*************************** OPERATOR OVERLOADING *****************************/

std::ostream&
operator<< (std::ostream& os, const Dog& rhs)
{
    os << rhs.getType();
    
    return os;
}