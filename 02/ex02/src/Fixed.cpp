/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:10 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/30 11:59:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

/* -------------------- Constructors / Destructors -------------------------- */

// constructor: default
Fixed::Fixed() {
    std::cout << CGREEN << "✓ " << CRESET
              << "Default constructor called" << std::endl;

    this->_value = 0;
}

// constructor: integer to fixed-point
Fixed::Fixed(const int& number) {
    std::cout << CGREEN << "✓ " << CRESET
              << CBLUE << "Int " << CRESET 
              << "constructor called" << std::endl;
    
    const int scale = std::pow(2, this->_fractionalBits);
    this->_value = number * scale;                          // this->_value = number << this->_fractionalBits;

}

// constructor: float to fixed-point
Fixed::Fixed(const float& number) {
    std::cout << CGREEN << "✓ " << CRESET
              << CBLUE << "Float " << CRESET 
              << "constructor called" << std::endl;

    int scale = std::pow(2, this->_fractionalBits);
    int scaledValue = std::round(number * scale);
    this->_value = static_cast<int>(scaledValue);
    
    // N.B: can't do `number << _fractionalBits` when dealing with floats
}

// constructor copy
Fixed::Fixed(const Fixed &copy) {
    std::cout << CGREEN << "✓ " << CRESET
              << "Copy constructor called" << std::endl;
    
    *this = copy;
}

// destructor
Fixed::~Fixed() {
    std::cout << CRED << "✗ " << CRESET
              << "Destructor called" << std::endl;
}

/* ------------------------- Operator Overload ------------------------------ */

void
Fixed::operator= ( const Fixed& cpyAssign) {
    std::cout << "Copy assignment operator called" << std::endl;

    this->_value = cpyAssign.getRawBits();
}

// bool
// Fixed::operator > (const Fixed& other) {
//     if (this->_value > other.getRawBits())
//         return true;
//     return false;
// }

// bool
// Fixed::operator < (const Fixed& other) {
//     if (this->_value < other.getRawBits())
//         return true;
//     return false;
// }
// bool
// Fixed::operator >= (const Fixed& other) {
//     if (this->_value >= other.getRawBits())
//         return true;
//     return false;
// }
// bool
// Fixed::operator <= (const Fixed& other) {
//     if (this->_value <= other.getRawBits())
//         return true;
//     return false;
// }
// bool
// Fixed::operator == (const Fixed& other) {
//     if (this->_value == other.getRawBits())
//         return true;
//     return false;
// }
// bool
// Fixed::operator != (const Fixed& other) {
//     if (this->_value != other.getRawBits())
//         return true;
//     return false;
// }


int Fixed::operator + (const Fixed& other) {
    return this->toInt();
}
// int Fixed::operator - (const Fixed& other) {
//     return this->_value - other.getRawBits();
// }
// int Fixed::operator * (const Fixed& other) {
//     return this->_value * other.getRawBits();
// }
// int Fixed::operator / (const Fixed& other) {
//     return this->_value / other.getRawBits();
// }



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