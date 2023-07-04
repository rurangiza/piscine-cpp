/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:46:26 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 15:10:01 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/UserInterface.hpp"

UserInterface ui;
int customTests();

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // int -> float -> addition -> cout

    ui.banner("mandatory");

    std::cout << a << std::endl;    // 0
    std::cout << ++a << std::endl;  // 0.00390625
    std::cout << a << std::endl;    // 0.00390625
    std::cout << a++ << std::endl;  // 0.00390625
    std::cout << a << std::endl;    // 0.0078125

    std::cout << b << std::endl;    // 10.1016
    
    std::cout << Fixed::max( a, b ) << std::endl;   // 10.1016

    customTests();
}

int customTests()
{
    Fixed a( 400 ), b( 200 );

    ui.banner("custom tests");

    /* ARITHMETIC */
    ui.add(a, b);
    ui.sub(a, b);
    ui.mult(a, b);
    ui.div(a, b);
    
    /* COMPARAISON */
    ui.big(a, b);
    ui.bigeq(a, b);
    ui.small(a, b);
    ui.smalleq(a, b);
    

    // std::cout << "Uno = " << uno << std::endl;
    // std::cout << "Dos = " << dos << std::endl;
    // std::cout << "-----------" << std::endl;

    // std::cout << CBOLD << "== arithmetics ==" << CRESET << std::endl;
    // std::cout << "Add: " << uno+dos << std::endl;
    // std::cout << "Sub: " << uno-dos << std::endl;
    // std::cout << "Mult: " << uno * dos << std::endl;
    // std::cout << "Div: " << uno / dos << std::endl;

    // std::cout << CBOLD << "== comparaisons ==" << CRESET << std::endl;
    // std::cout << "uno > dos : "
    //           << CBLUE << std::boolalpha << (uno > dos) << CRESET << std::endl;

    return (0);
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