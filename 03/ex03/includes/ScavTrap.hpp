/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 15:22:52 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
    #define SCAVTRAP_HPP

    #include "ClapTrap.hpp"

    class ScavTrap : virtual public ClapTrap {
        public:
            ScavTrap( void );
            ScavTrap( std::string name );
            ScavTrap( const ScavTrap& src );
            ~ScavTrap( void );
            ScavTrap& operator= ( const ScavTrap& rhs );

            void guardGate();

            void attack( const std::string& target );
    };

#endif // SCAVTRAP_HPP