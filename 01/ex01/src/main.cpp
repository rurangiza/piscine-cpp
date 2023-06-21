/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 14:55:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"
#include <iomanip>

int
main(void) {

    std::string name("Brutus");
    int size = 3;

    // create horde
    std::cout << CGREEN
              << "> Creating a horde of " << size << "zombies"
              << CRESET << std::endl;
    Zombie *horde = zombieHorde(size, name);
    if (!horde)
        return (EXIT_FAILURE);
    
    // display horde
    std::cout << CGREEN
              << "> Displaying the horde:"
              << CRESET << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "["
                  << std::setw(2) << std::setfill('0')
                  << i+1 << "] ";
        horde[i].announce();
    }

    // kill horde
    delete[] horde;

    return 0;
}
