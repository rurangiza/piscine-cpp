/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:29:29 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 10:34:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.class.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
Cat::Cat()
{
    _type = "cat";
    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << _type << CRESET
            << std::endl;
}

// Copy Constructor
Cat::Cat( const Cat& src )
{ 
    _type = src._type;
    
    std::cout << CYELLOW << " | copying " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Deconstructor d
Cat::~Cat()
{
    std::cout << CRED << "|| " << CRESET
              << CBOLD << _type << CRESET
              << std::endl;
}

// Assignement Operator Overloading
Cat&
Cat::operator= ( const Cat &rhs )
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
Cat::getType() const { return _type; }

void
Cat::makeSound() const
{
    std::cout << CBLUE << " • " << CRESET
              << CGRAY << _type << ": " << CRESET
              << "meow\n";
}

/*************************** OPERATOR OVERLOADING *****************************/

std::ostream&
operator<< (std::ostream& os, const Cat& rhs)
{
    os << rhs.getType();
    
    return os;
}