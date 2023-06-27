/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/27 16:19:56 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::_fractionalBits = 0;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;

    this->_fixedPoint = 0;
}

Fixed::Fixed( Fixed const &cpy){
    std::cout << "Copy constructor called" << std::endl;
    
    this->_fixedPoint = cpy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

/* --- */

void
Fixed::operator=( const Fixed& cpyAssign) {
    std::cout << "Copy assignment operator called" << std::endl;

    this->_fixedPoint = cpyAssign.getRawBits();
}

int
Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member functionc called" << std::endl;
    
    return this->_fixedPoint;
}

void
Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}