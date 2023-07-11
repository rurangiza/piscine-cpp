/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:30:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/10 16:18:38 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
    #define FRAGTRAP_HPP

    #include "ClapTrap.hpp"

    class FragTrap : virtual public ClapTrap {
        private:
            // 
        public:
            FragTrap( void );
            FragTrap( std::string name );
            FragTrap( const FragTrap& src);
            ~FragTrap();
            FragTrap& operator= ( const FragTrap& rhs);

            void highFiveGuys();

            // virtual void attack( const std::string& target );
    };

#endif // FRAGTRAP_HPP