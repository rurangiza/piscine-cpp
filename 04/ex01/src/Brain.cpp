/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:02:36 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 16:25:53 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

/****************************** CANONICAL FORM ********************************/

// Default Constructor
Brain::Brain()
{
    std::cout << CGREEN << "|| " << CRESET
            << CBOLD << "Brain" << CRESET
            << std::endl;
}

// Copy Constructor
Brain::Brain( const Brain& src )
{     
    std::cout << CYELLOW << " | copying " << CRESET
              << CBOLD << "Brain" << CRESET
              << std::endl;
}

// Deconstructor d
Brain::~Brain()
{

    // TODO: delete or not the array    

    std::cout << CRED << "|| " << CRESET
              << CBOLD << "Brain" << CRESET
              << std::endl;
}

// Assignement Operator Overloading
Brain&
Brain::operator= ( const Brain &rhs )
{
    // TODO: check how to copy the 2d array
    if ( this == &rhs ) {
        std::cout << CYELLOW << "Warning: " << CRESET
                  << "Self-assignment detected. Skipping assignment."
                  << std::endl;
        return ( *this );
    }

    std::cout << CYELLOW << " | assigning " << CRESET
              << CBLUE << "Brain" << CRESET
              << " to " << CBLUE << "Brain" << CRESET
              << std::endl;
    
    return *this;    
}