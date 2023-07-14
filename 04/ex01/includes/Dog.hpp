/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:43:37 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 15:58:37 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
    #define DOG_CLASS_HPP

    #include "Animal.hpp"
    #include "Brain.hpp"

    class Dog : public Animal
    {
        private:
            Brain* _brain;
        public:
            Dog( void );
            ~Dog( void );
            Dog( const Dog& src );
            Dog& operator= (const Dog& rhs);
            
            std::string getType() const;
            void makeSound() const;
            
    };

#endif // DOG_HPP
