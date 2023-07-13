/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:53 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/13 21:03:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/UserInterface.class.hpp"
#include "../includes/Cat.class.hpp"
#include "../includes/Dog.class.hpp"
#include "../includes/WrongAnimal.class.hpp"
#include "../includes/WrongCat.class.hpp"

UserInterface ui2;

void moreTests();

int main()
{
    // Mandatory Tests
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* x = new WrongCat();

    std::cout << x->getType() << std::endl;
    x->makeSound();

    moreTests();

    return 0;
}

void moreTests()
{
    
}