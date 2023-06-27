/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:07 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/27 16:09:12 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {

    private:
        int                 _fixedPoint;
        static const int    _fractionalBits;
    
    public:
        Fixed(); // default empty
        Fixed( Fixed const &cpy); // copy constructor
        ~Fixed(); // destructor

        void operator=( const Fixed& cpyAssign);
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};