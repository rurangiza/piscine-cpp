/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:22:42 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 15:09:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERINTERFACE_HPP
    #define USERINTERFACE_HPP

    #include <iostream>
    #include "Fixed.hpp"

    class UserInterface {
        public:
            void add(Fixed& a, Fixed& b);
            void sub(Fixed& a, Fixed& b);
            void mult(Fixed& a, Fixed& b);
            void div(Fixed& a, Fixed& b);

            void big(const Fixed& a, const Fixed& b) const;
            void bigeq(const Fixed& a, const Fixed& b) const;
            void small(const Fixed& a, const Fixed& b) const;
            void smalleq(const Fixed& a, const Fixed& b) const;
            void equal(const Fixed& a, const Fixed& b) const;

            void banner( std::string msg );
    };

#endif