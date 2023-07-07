/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 11:06:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

/*

 ██████╗ ██████╗ ███╗   ██╗███████╗████████╗██████╗ ██╗   ██╗ ██████╗████████╗ ██████╗ ██████╗ ███████╗
██╔════╝██╔═══██╗████╗  ██║██╔════╝╚══██╔══╝██╔══██╗██║   ██║██╔════╝╚══██╔══╝██╔═══██╗██╔══██╗██╔════╝
██║     ██║   ██║██╔██╗ ██║███████╗   ██║   ██████╔╝██║   ██║██║        ██║   ██║   ██║██████╔╝███████╗
██║     ██║   ██║██║╚██╗██║╚════██║   ██║   ██╔══██╗██║   ██║██║        ██║   ██║   ██║██╔══██╗╚════██║
╚██████╗╚██████╔╝██║ ╚████║███████║   ██║   ██║  ██║╚██████╔╝╚██████╗   ██║   ╚██████╔╝██║  ██║███████║
 ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝  ╚═════╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚══════╝

*/

// constructor: default
Fixed::Fixed() {
    this->_value = 0;
}

// constructor: integer to fixed-point
Fixed::Fixed(const int& number) {

    // const int scale = std::pow(2, this->_fractionalBits);
    // this->_value = number * scale; 

    this->_value = number << this->_fractionalBits;
}

// constructor: float to fixed-point
Fixed::Fixed(const float& number) {

    // int scale = std::pow(2, this->_fractionalBits);
    // int scaledValue = std::round(number * scale);
    // this->_value = static_cast<int>(scaledValue);

    // N.B: can't do `number << _fractionalBits` when dealing with floats

    this->_value = roundf(number * (1 << this->_fractionalBits));
    
}

// constructor copy
Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

// destructor
Fixed::~Fixed() {
    ;
}

/*

███╗   ███╗███████╗███╗   ███╗██████╗ ███████╗██████╗ 
████╗ ████║██╔════╝████╗ ████║██╔══██╗██╔════╝██╔══██╗
██╔████╔██║█████╗  ██╔████╔██║██████╔╝█████╗  ██████╔╝
██║╚██╔╝██║██╔══╝  ██║╚██╔╝██║██╔══██╗██╔══╝  ██╔══██╗
██║ ╚═╝ ██║███████╗██║ ╚═╝ ██║██████╔╝███████╗██║  ██║
╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝

███████╗██╗   ██╗███╗   ██╗ ██████╗████████╗██╗ ██████╗ ███╗   ██╗
██╔════╝██║   ██║████╗  ██║██╔════╝╚══██╔══╝██║██╔═══██╗████╗  ██║
█████╗  ██║   ██║██╔██╗ ██║██║        ██║   ██║██║   ██║██╔██╗ ██║
██╔══╝  ██║   ██║██║╚██╗██║██║        ██║   ██║██║   ██║██║╚██╗██║
██║     ╚██████╔╝██║ ╚████║╚██████╗   ██║   ██║╚██████╔╝██║ ╚████║
╚═╝      ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝

*/

int Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

float Fixed::toFloat(void) const {

    // float divider = (float)(1 << this->_fractionalBits); // or divider = pow(2, _fractionalBits)
    // float castedValue = (float)this->_value;
    // return (castedValue / divider);

    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::getRawBits( void ) const {    
    return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}

/*
 ██████╗ ██████╗ ███████╗██████╗  █████╗ ████████╗ ██████╗ ██████╗ ███████╗
██╔═══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗██╔════╝
██║   ██║██████╔╝█████╗  ██████╔╝███████║   ██║   ██║   ██║██████╔╝███████╗
██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗██╔══██║   ██║   ██║   ██║██╔══██╗╚════██║
╚██████╔╝██║     ███████╗██║  ██║██║  ██║   ██║   ╚██████╔╝██║  ██║███████║
 ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚══════╝                                                                        
*/                                                              

// Assignment
Fixed& Fixed::operator = ( const Fixed& copy) {
    this->_value = copy.getRawBits();
    return *this;
}

//------------------------------------------------------------------------------

//Comparaison
bool Fixed::operator > (const Fixed& other) const {
    return this->_value > other.getRawBits();
}

bool Fixed::operator >= (const Fixed& other) const {
    return this->_value >= other.getRawBits();
}

bool Fixed::operator < (const Fixed& other) const {
    return this->_value < other.getRawBits();
}

bool Fixed::operator <= (const Fixed& other) const {
    return this->_value <= other.getRawBits();
}

bool Fixed::operator == (const Fixed& other) const {
    return this->_value == other.getRawBits();
}

bool Fixed::operator != (const Fixed& other) const {
    return this->_value != other.getRawBits();
}

// Arithmetic

Fixed Fixed::operator + (const Fixed& other) {
    Fixed tmp;
    
    tmp.setRawBits(this->_value + other.getRawBits());
    return tmp;
};

Fixed Fixed::operator - (const Fixed& other) {
    Fixed tmp;
    
    tmp.setRawBits(this->_value - other.getRawBits());
    return tmp;
};

Fixed Fixed::operator * (const Fixed& other) {
    Fixed tmp;

    tmp.setRawBits(((long)this->_value * (long)other._value) >> this->_fractionalBits); // maybe cast to long
    return tmp;
};

Fixed Fixed::operator / (const Fixed& other) {
    Fixed	tmp;

	tmp.setRawBits(((long) this->_value << this->_fractionalBits) / (long) other._value); // maybe cast to long
	return (tmp);
};

// Increment / Decrement

Fixed& Fixed::operator ++ ( void )
{
    ++this->_value;
    return (*this); 
}

Fixed Fixed::operator ++ ( int )
{
    Fixed tmp(*this);
    this->_value++;
    return (tmp); 
}

Fixed& Fixed::operator -- ( void )
{
    --this->_value;
    return (*this); 
}

Fixed Fixed::operator -- ( int )
{
    Fixed tmp(*this);
    this->_value--;
    return (tmp); 
}

// Display

std::ostream& operator << (std::ostream &out, const Fixed& number) {
    out << number.toFloat();
    return out;
}

// Min max
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    Fixed tmp;
    
    if (a < b)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    return b;
}
