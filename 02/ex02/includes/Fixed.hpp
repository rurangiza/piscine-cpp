/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:07 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/30 17:32:56 by arurangi         ###   ########.fr       */
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
        Fixed(const Fixed& cpy);
        ~Fixed();

        void operator=(const Fixed& cpyAssign);

        // >, <, >=, <=, == and !=
        bool operator > (const Fixed& other);
        bool operator < (const Fixed& other);
        bool operator >= (const Fixed& other);
        bool operator <= (const Fixed& other);
        bool operator == (const Fixed& other);
        bool operator != (const Fixed& other);
        
        // +, -, *, /
        Fixed operator + (const Fixed& other);
        Fixed operator - (const Fixed& other);
        Fixed operator * (const Fixed& other);
        Fixed operator / (const Fixed& other);

        Fixed operator ++ ( void );
        Fixed& operator ++ ( int );
        
        int     getRawBits(void) const;
        void    setRawBits(const int raw);

        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed& number);

#endif // FIXED_HPP