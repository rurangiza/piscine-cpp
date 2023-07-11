/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:30:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/11 10:28:08 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
    #define FRAGTRAP_HPP

    #include "ClapTrap.hpp"

    class FragTrap : public ClapTrap {
        private:
            // 
        public:
            FragTrap( void );
            FragTrap( std::string name );
            FragTrap( const FragTrap& src);
            FragTrap& operator= ( const FragTrap& rhs);
            ~FragTrap();

            void highFiveGuys();
    };

#endif // FRAGTRAP_HPP