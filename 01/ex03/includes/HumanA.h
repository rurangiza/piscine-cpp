/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:36:13 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 18:33:29 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iostream>
#include "../includes/Weapon.h"
#include "common.h"

class HumanA {

    private:
      std::string m_name;
      Weapon      weapon;

    public:
      HumanA(std::string name, const Weapon& newWeapon);
      ~HumanA();

      void attack();

};

#endif