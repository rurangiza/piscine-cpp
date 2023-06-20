/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/20 15:51:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

// void whoAreYou(Zombie *z) {
    
// }

// On Stack
Zombie newZombie_bis( std::string name ) {
    
    Zombie zombie(name);
    return zombie;
}

void changeScope(Zombie *zomb) {
    zomb->announce();
    std::cout << "  ↳ at " << &(*zomb) << ": in changeScope()" << std::endl;  
}

void changeScope_stack(Zombie zombie) {
    zombie.announce();    
    std::cout << "  ↳ at " << &zombie << ": in changeScope()" << std::endl;
    std::cout << "  ↱ at " << &zombie << ": in changeScope()" << std::endl;
}

int main(void) {
    std::cout << "_start" << std::endl;

    // Declaration
    Zombie z_stack = newZombie_bis("Eric_stack");
    std::cout << "↳ at " << &z_stack << ": in main()" << std::endl;
    
    Zombie *z_heap = newZombie("Michael_heap");
    std::cout << "↳ at " << &z_heap << ": in main()" << std::endl;

    std::cout << "---" << std::endl;

    // change scope
    changeScope_stack(z_stack);
    changeScope(z_heap);

    std::cout << "---" << std::endl;

    // back in main
    std::cout << "↱ at " << &z_heap << ": in main()" << std::endl;

    delete z_heap;
    
    std::cout << "_end" << std::endl;
    std::cout << "↱ at " << &z_stack << ": in main()" << std::endl;
    return 0;
}
