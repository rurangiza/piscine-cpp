/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 16:45:51 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

int
main(void) {

    int         size = 4;
    std::string name("Brutus");

    // create a zombie horde
    Zombie *horde = zombieHorde(size, name);
    
    // make them announce themselves
    for (int i = 0; i < size; i++) {
        horde[i].announce();
    }

    return 0;
}
