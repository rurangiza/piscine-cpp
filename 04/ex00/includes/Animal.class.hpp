/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:40:35 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 18:12:29 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
    #define ANIMAL_CLASS_HPP
    
    #include <iostream>

    class Animal
    {
        protected:
            std::string _type;

        public:
            Animal( void ) {
                _type = "Animal";
            }
            ~Animal( void ) {
                ;
            }
            Animal( const Animal& src );
            Animal& operator= (const Animal& rhs);

            std::string getType() const { return _type; }
            virtual void makeSound() const {
                std::cout << CGRAY << _type << ": " << CRESET
                          << "Animal sound\n";
            }
    };

#endif // ANIMAL_HPP