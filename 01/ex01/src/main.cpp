/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 15:31:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"
#include <iomanip>

int
main(void) {

    std::string name("Brutus");
    int size = 7;

    // create horde
    Zombie *horde = zombieHorde(size, name);
    if (!horde)
        return (EXIT_FAILURE);
    std::cout << CGREEN
              << "> Created a horde of " << size << " zombies"
              << CRESET << std::endl;
    
    // display horde
    for (int i = 0; i < size; i++) {
        std::cout << "["
                  << std::setw(2) << std::setfill('0')
                  << i+1 << "] ";
        horde[i].announce();
    }

    // kill horde
    delete[] horde;
    std::cout << CRED
              << "> Killed the horde "
              << CRESET << std::endl;

    return 0;
}
