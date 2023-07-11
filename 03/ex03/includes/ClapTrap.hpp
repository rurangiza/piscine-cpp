/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:34:36 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 10:33:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
    #define CLAPTRAP_HPP

    #include <iostream>
    #include <string>

    #include "constants.hpp"
    #include "UserInterface.hpp"

    class ClapTrap
    {
        protected:
            std::string _name;
            int         _hitPoints;
            int         _energyPoints;
            int         _attackDamage;

        public:
            ClapTrap();
            ClapTrap( std::string name );
            ClapTrap( const ClapTrap &copy );
            ~ClapTrap();
            ClapTrap& operator = ( const ClapTrap &rhs );
            
            virtual void    attack( const std::string& target );
            void            takeDamage( unsigned int amount );
            void            beRepaired( unsigned int amount );

            std::string getName() const;
            int         getHitPoints() const;
            int         getEnergyPoints() const;
            int         getAttackDamage() const;
    };

    std::ostream& operator<< ( std::ostream& os, const ClapTrap& obj );

#endif // CLAPTRAP_HPP