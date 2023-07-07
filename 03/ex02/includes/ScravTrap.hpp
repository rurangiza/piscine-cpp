/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 11:38:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
    #define SCRAVTRAP_HPP

    #include "ClapTrap.hpp"

    class ScravTrap : public ClapTrap {
        private:
            //
        public:
            ScravTrap( std::string name );
            ~ScravTrap();

            void guardGate();
    };

#endif // SCRAVTRAP_HPP