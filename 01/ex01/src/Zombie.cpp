/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 16:21:26 by arurangi         ###   ########.fr       */
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

void
Zombie::setName(std::string name) {
    this->m_name = name;
}
