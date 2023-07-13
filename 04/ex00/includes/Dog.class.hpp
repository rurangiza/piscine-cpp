/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:43:37 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 18:12:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
    #define DOG_CLASS_HPP

    #include "Animal.class.hpp"

    class Dog : public Animal
    {
        private:
            //
        public:
            Dog( void ) {
                _type = "Dog";
            }
            ~Dog( void );
            Dog( const Dog& src );
            Dog& operator= (const Dog& rhs);
            
            std::string getType() const { return _type; }
            
            void makeSound() const {
                std::cout << CGRAY << _type << ": " << CRESET
                          << "Wuf wouf\n";
            }
            
    };

#endif // DOG_HPP
