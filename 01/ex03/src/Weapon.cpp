/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:26:19 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 16:20:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Weapon::Weapon(std::string type) {
    this->m_type = type;
}

Weapon::~Weapon() {
  ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

// returns a reference to a string object whose content will not be changed
const std::string
&Weapon::getType() {
  return (m_type);
}

void
Weapon::setType(std::string type) {
  this->m_type = type;
}