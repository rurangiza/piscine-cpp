/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:15:53 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 14:07:35 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
    #define WRONGANIMAL_CLASS_HPP

    #include <iostream>
    #include "constants.hpp"

    class WrongAnimal
    {
        
        protected:
            std::string _type;
            
        public:
            WrongAnimal( void );
            virtual ~WrongAnimal( void );
            WrongAnimal( const WrongAnimal& src );
            WrongAnimal& operator= (const WrongAnimal& rhs);

            std::string getType() const;
            void makeSound() const;
    };

#endif // WRONGANIMAL_CLASS_HPP