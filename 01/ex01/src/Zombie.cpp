/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 14:52:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Zombie::Zombie(std::string name) {
    this->m_name = name;
    ;
};

Zombie::Zombie() {
    ;
};

Zombie::~Zombie() {
    ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void Zombie::announce(void) {
    std::cout << this->m_name << ": " 
	          << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

void Zombie::setName(std::string name) {
    this->m_name = name;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Zombie* newZombie( std::string name ) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void randomChump( std::string name ) {
    Zombie zombie(name);
    zombie.announce();
}

Zombie* zombieHorde( int N, std::string name ) {
  
    if (N < 0) {
        std::cerr << "Error: invalid number of zombies" << std::endl;   
        return (nullptr);
    }
    Zombie *horde = new Zombie[N];

    int i = 0;
    while (i < N) {
    horde[i].setName(name);
    i++;
    }  
    return (horde);
}