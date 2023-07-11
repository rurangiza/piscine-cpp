/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:08:08 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 10:28:37 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
    #define DIAMONDTRAP_HPP

    #include "ScavTrap.hpp"
    #include "FragTrap.hpp"
    #include "UserInterface.hpp"

    class DiamondTrap : public ScavTrap, public FragTrap {
        private:
            std::string _name;
        public:
            DiamondTrap( void );
            DiamondTrap( std::string name );
            DiamondTrap( const DiamondTrap& src );
            DiamondTrap& operator= ( const DiamondTrap& rhs);
            ~DiamondTrap();
    };

#endif // DIAMONDTRAP_HPP