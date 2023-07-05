/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 15:25:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(){
    std::cout << CGREEN << "✓ " << CRESET
              << "Default constructor called" << std::endl;

    this->_fixedPoint = 0;
}

Fixed::Fixed( Fixed const &cpy){
    std::cout << CGREEN << "✓ " << CRESET
              << "Copy constructor called" << std::endl;
    
    this->_fixedPoint = cpy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << CRED << "✗ " << CRESET
              << "Destructor called" << std::endl;
}

/* --- */

void
Fixed::operator=( const Fixed& cpyAssign) {
    std::cout << CBLUE << "• " << CRESET
              << "Copy assignment operator called" << std::endl;

    this->_fixedPoint = cpyAssign.getRawBits();
}

int
Fixed::getRawBits( void ) const {
    std::cout << "• "
              << "getRawBits member functionc called" << std::endl;
    
    return this->_fixedPoint;
}

void
Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}
