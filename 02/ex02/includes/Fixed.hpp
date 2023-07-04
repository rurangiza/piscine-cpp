/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:07 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 13:31:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#include "constants.hpp"

class Fixed {

     private:
        int                 _value;
        static const int    _fractionalBits;
        static const int    _scale;

    public:
        Fixed();
        Fixed(const int& number);
        Fixed(const float& number);
        Fixed(const Fixed& copy);
        ~Fixed();

        Fixed& operator = (const Fixed& copy);

        // >, <, >=, <=, == and !=
        bool operator > (const Fixed& other) const;
        bool operator < (const Fixed& other) const;
        bool operator >= (const Fixed& other) const;
        bool operator <= (const Fixed& other) const;
        bool operator == (const Fixed& other) const;
        bool operator != (const Fixed& other) const;
        
        // +, -, *, /
        Fixed operator + (const Fixed& other);
        Fixed operator - (const Fixed& other);
        Fixed operator * (const Fixed& other);
        Fixed operator / (const Fixed& other);

        Fixed& operator ++ ( void );
        Fixed operator ++ ( int );
        Fixed& operator -- ( void );
        Fixed operator -- ( int );

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
        int     getRawBits(void) const;
        void    setRawBits(const int raw);

        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed& number);

#endif // FIXED_HPP