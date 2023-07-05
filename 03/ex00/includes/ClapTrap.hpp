/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:14:06 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/05 13:42:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        
    public:
        ClapTrap() {
            _hitPoints = 10;
            _energyPoints = 10;
            _attackDamage = 0;
        }
        
        ClapTrap( std::string name ) {
            _name = name;
            _hitPoints = 10;
            _energyPoints = 10;
            _attackDamage = 0;
        }

        ClapTrap& operator = ( const ClapTrap &rhs ) {
            _name = rhs._name;
            _hitPoints = rhs._hitPoints;
            _energyPoints = rhs._energyPoints;
            _attackDamage = rhs._attackDamage;
        }
        
        ClapTrap( const ClapTrap &copy ) {
            _name = copy._name;
            _hitPoints = copy._hitPoints;
            _energyPoints = copy._energyPoints;
            _attackDamage = copy._attackDamage;
        }
        
        ~ClapTrap();

        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

};

std::ostream operator<< ( std::ostream os, ClapTrap const & other );