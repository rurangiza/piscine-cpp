/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:08:08 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 16:22:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
    #define DIAMONDTRAP_HPP

    #include "ScravTrap.hpp"
    #include "FragTrap.hpp"

    class DiamondTrap : public ClapTrap, public ScravTrap, public FragTrap {
        private:
            std::string _name;
        public:
            DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
            {
                this->_hitPoints = FragTrap::_hitPoints;
                _energyPoints = FragTrap::_energyPoints;
            }
            ~DiamondTrap();
    };

#endif // DIAMONDTRAP_HPP