/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:45:11 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 15:58:40 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
    #define CAT_CLASS_HPP

    #include "Animal.hpp"
    #include "Brain.hpp"

    class Cat : public Animal
    {
        private:
            Brain* _brain;
        public:
            Cat( void );
            ~Cat( void );
            Cat( const Cat& src );
            Cat& operator= (const Cat& rhs);

            std::string getType() const;
            void makeSound() const;
            
    };

#endif // CAT_HPP