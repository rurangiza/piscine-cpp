/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:40:35 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 21:14:33 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
    #define ANIMAL_CLASS_HPP
    
    #include <iostream>
    #include "constants.hpp"

    class Animal
    {
        protected:
            std::string _type;

        public:
            Animal( void );
            ~Animal( void );
            Animal( const Animal& src );
            Animal& operator= (const Animal& rhs);

            std::string getType() const;
            virtual void makeSound() const;
    };

    std::ostream& operator<< (std::ostream os, const Animal& rhs);

#endif // ANIMAL_HPP