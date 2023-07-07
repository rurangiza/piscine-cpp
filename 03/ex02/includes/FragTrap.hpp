/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:30:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/07 14:54:51 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
    #define FRAGTRAP_HPP

    #include "ClapTrap.hpp"

    class FragTrap : public ClapTrap {
        private:
            // 
        public:
            FragTrap( std::string name );
            ~FragTrap();

            void highFiveGuys();
    };

#endif // FRAGTRAP_HPP