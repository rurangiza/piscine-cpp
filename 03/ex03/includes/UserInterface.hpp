/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:12 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 11:24:42 by arurangi         ###   ########.fr       */
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

            void setFormat( const int& width, const std::string& alignment ) const;
            void unsetFormat();
            
            void healing( const std::string& name, const unsigned int& amount ) const;
            void attack( const std::string& name, const std::string& target, const int& hitpoints, std::string origin ) const;
            void damage( const std::string& name, const unsigned int& amount ) const;

            void err_healing( const std::string& name ) const;
            void err_attacking( const std::string& name ) const;
            void err_takingDamage( const std::string& name ) const;

            void guardMode( const std::string& name ) const;
            void highFive( const std::string& name ) const;

            void who( const std::string& name ) const;
    };
    
    class A {
        public:
            A() { std::cout << "A : construction" << std::endl; }
    };
    class B : public A {
        public:
            B() { std::cout << "B : construction" << std::endl; }
    };
    class C : public A {
        public:
            C() { std::cout << "C : construction" << std::endl; }
    };
    class D : public B, public C {
        public:
            D() { std::cout << "D : construction" << std::endl; }
    };

#endif // USERINTERFACE_HPP