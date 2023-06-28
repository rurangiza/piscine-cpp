/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/28 09:02:55 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::_fractionalBits = 8;

/* -- Constructors / Destructors -- */

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;

    this->_fixedPoint = 0;
}

Fixed::Fixed(int const number) {
    std::cout << "Int constructor called" << std::endl;

    // take interger as paramater
    // convert to corresponding fixed point value
}

Fixed::Fixed( Fixed const &cpy){
    std::cout << "Copy constructor called" << std::endl;
    
    this->_fixedPoint = cpy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

/* -- Operator Overloading -- */

void
Fixed::operator=( const Fixed& cpyAssign) {
    std::cout << "Copy assignment operator called" << std::endl;

    this->_fixedPoint = cpyAssign.getRawBits();
}

/* -- Member fucntions -- */

int
Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member functionc called" << std::endl;
    
    return this->_fixedPoint;
}

void
Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}