/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:14:02 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 10:54:13 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
    #define WRONGCAT_CLASS_HPP

    #include "WrongAnimal.class.hpp"

    class WrongCat : public WrongAnimal
    {

        private:
            //
        public:
            WrongCat( void );
            ~WrongCat( void );
            WrongCat( const WrongCat& src );
            WrongCat& operator= (const WrongCat& rhs);

            std::string getType() const;
            virtual void makeSound() const;
    };

#endif // WRONGCAT_CLASS_HPP