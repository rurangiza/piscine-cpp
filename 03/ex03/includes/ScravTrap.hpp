/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 09:35:23 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
    #define SCRAVTRAP_HPP

    #include "ClapTrap.hpp"

    class ScravTrap : public ClapTrap {
        private:
            //
        public:
            ScravTrap( void );
            ScravTrap( std::string name );
            ScravTrap( const ScravTrap &src );
            ~ScravTrap();

            ScravTrap& operator= ( const ScravTrap& rhs);

            void guardGate();
    };

#endif // SCRAVTRAP_HPP