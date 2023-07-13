/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:45:11 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 21:24:55 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
    #define CAT_CLASS_HPP

    #include "Animal.class.hpp"

    class Cat : public Animal
    {
        private:
            //
        public:
            Cat( void ) {
                _type = "Cat";
            }
            ~Cat( void ) {
                ;
            }
            Cat( const Cat& src );
            Cat& operator= (const Cat& rhs);

            std::string getType() const { return _type; }
            void makeSound() const {
                std::cout << CGRAY << _type << ": " << CRESET
                          << "meow\n";
            }
            
    };

#endif // CAT_HPP