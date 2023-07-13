/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:14:02 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 18:20:37 by arurangi         ###   ########.fr       */
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
            WrongCat( void ) {
                _type = "WrongCat";
            }
            ~WrongCat( void ) {
                ;
            }
            WrongCat( const WrongCat& src );
            WrongCat& operator= (const WrongCat& rhs);

            std::string getType() const { return _type; }
            virtual void makeSound() const {
                std::cout << CGRAY << _type << ": " << CRESET
                          << "Miaouiiiii\n";
            }
    };

#endif // WRONGCAT_CLASS_HPP