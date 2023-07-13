/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:12 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 12:25:34 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERINTERFACE_HPP
    #define USERINTERFACE_HPP

    #include <iostream>
    #include <iomanip>
    #include "constants.hpp"

    class UserInterface {
        public:
            void header();
            void iScope( const std::string& funcName, const int& indent ) const;
            void oScope( const std::string& funcName, const int& indent ) const;
            
            void healing( const std::string& name, const unsigned int& amount ) const;
            void attack( const std::string& name, const std::string& target, const int& attackDamage ) const;
            void damage( const std::string& name, const unsigned int& amount ) const;

            void err_healing( const std::string& name ) const;
            void err_attacking( const std::string& name ) const;
            void err_takingDamage( const std::string& name ) const;
    };

#endif // USERINTERFACE_HPP