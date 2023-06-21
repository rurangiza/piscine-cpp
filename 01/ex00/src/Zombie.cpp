/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 14:29:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Zombie::Zombie(std::string name) {
    this->m_name = name;
    showName(this->m_name);
    std::cout << ": " << CGREEN << "constructed" << CRESET
              << std::endl;
    ;
};

Zombie::~Zombie() {
    showName(this->m_name);
    std::cout << ": " << CRED << "destroyed" << CRESET
              << std::endl;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void Zombie::announce(void) {
    showName(this->m_name);
    std::cout << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Zombie *newZombie( std::string name ) {
    
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void randomChump( std::string name ) {
    Zombie zombie(name);
    zombie.announce();
}

void showName(std::string name) {
    std::cout << CBLUE << "• " << CRESET
              << std::setw(12)
              << std::left
              << std::setfill('.')
              << name
              << CRESET;
}
