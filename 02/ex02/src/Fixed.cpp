/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/30 17:32:52 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

/* -------------------- Constructors / Destructors -------------------------- */

// constructor: default
Fixed::Fixed() {
    this->_value = 0;
}

// constructor: integer to fixed-point
Fixed::Fixed(const int& number) {
    const int scale = std::pow(2, this->_fractionalBits);
    this->_value = number * scale;                          // this->_value = number << this->_fractionalBits;

}

// constructor: float to fixed-point
Fixed::Fixed(const float& number) {
    int scale = std::pow(2, this->_fractionalBits);
    int scaledValue = std::round(number * scale);
    this->_value = static_cast<int>(scaledValue);
    
    // N.B: can't do `number << _fractionalBits` when dealing with floats
}

// constructor copy
Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

// destructor
Fixed::~Fixed() {
    ;
}

/* ------------------------- Operator Overload ------------------------------ */

void
Fixed::operator= ( const Fixed& cpyAssign) {
    this->_value = cpyAssign.getRawBits();
}

Fixed
Fixed::operator + (const Fixed& other) {
    return (this->_value + other.getRawBits());
};

// Overload ++ when used as prefix
Fixed Fixed::operator ++ ( void )
{
    Fixed tmp(*this);
    ++this->_value;
    return (tmp); 
}

// Overload ++ when used as postfix
Fixed& Fixed::operator ++ ( int )
{
    this->_value++;
    return (*this); 
}

// Overload * to multiply
Fixed Fixed::operator * (const Fixed& other) {
    Fixed tmp;

    tmp.setRawBits(((long) this->_value * (long) other._value) >> this->_fractionalBits);
    return tmp;
};

// ----------------------------------------------------------------------------

std::ostream&
operator<< (std::ostream &out, const Fixed& number) {
    out << number.toFloat();
    return out;
}

/* ------------------------- Member Functions ------------------------------- */

int
Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

float
Fixed::toFloat(void) const {

    float divider = (float)(1 << this->_fractionalBits); // or divider = pow(2, _fractionalBits)
    float castedValue = (float)this->_value;
    return (castedValue / divider);
}

int
Fixed::getRawBits( void ) const {    
    return this->_value;
}

void
Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}