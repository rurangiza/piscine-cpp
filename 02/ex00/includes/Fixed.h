/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:07 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 15:21:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "constants.h"

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


/** EXPECTED OUTPUT

$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>

**/