/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:38:49 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/13 12:54:13 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

HumanA::HumanA(std::string name, Weapon& newWeapon) : weapon(newWeapon) {
  this->m_name = name;
}

HumanA::~HumanA() {
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
HumanA::attack() {
  // Fomrat: <name> attacks with their <weapon type>
  std::cout << CBOLD CBLUE << this->m_name << CRESET
            << " attacks with their " << this->weapon.getType()
            << std::endl;
}