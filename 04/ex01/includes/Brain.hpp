/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:48:08 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 16:04:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
    #define BRAIN_HPP
    
    #include <string>
    #include <iostream>
    #include "constants.hpp"

    class Brain {
        private:
            std::string ideas[100];
        public:
            Brain( void );
            ~Brain( void );
            Brain( const Brain& src );
            Brain& operator= (const Brain& rhs);
    };

#endif // BRAIN_HPP