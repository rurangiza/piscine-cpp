/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:08:08 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 15:59:43 by arurangi         ###   ########.fr       */
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
            ~DiamondTrap();
            DiamondTrap& operator= ( const DiamondTrap& rhs);
    };

#endif // DIAMONDTRAP_HPP