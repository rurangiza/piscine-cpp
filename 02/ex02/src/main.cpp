/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:46:26 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 13:31:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main( void )
{
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // int -> float -> addition -> cout

    // std::cout << a << std::endl;    // 0
    // std::cout << ++a << std::endl;  // 0.00390625
    // std::cout << a << std::endl;    // 0.00390625
    // std::cout << a++ << std::endl;  // 0.00390625
    // std::cout << a << std::endl;    // 0.0078125

    // std::cout << b << std::endl;    // 10.1016
    
    // std::cout << Fixed::max( a, b ) << std::endl;   // 10.1016

    Fixed a(909), b(65);

    std::cout << Fixed::min(a, b) << std::endl;

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << b * a << std::endl;
}

/** EXPECTED OUTPUT 
---

$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>

---
*/