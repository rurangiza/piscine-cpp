/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:38:11 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 16:21:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

HumanB::HumanB(std::string name) {
  this->m_name = name;
  this->weapon = nullptr;
}

HumanB::~HumanB() {
  ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
HumanB::attack() {
  // Fomrat: <name> attacks with their <weapon type>
  std::cout << CBOLD CYELLOW << this->m_name << CRESET
            << " attacks with their " << weapon->getType()
            << std::endl;
}

void
HumanB::setWeapon(Weapon& newWeapon) {
    
    this->weapon = &newWeapon;
}