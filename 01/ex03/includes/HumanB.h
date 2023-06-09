/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:36:28 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 11:02:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.h"
#include "common.h"

class HumanB {

    private:
      std::string m_name;
      Weapon      *weapon;
      
    public:
      HumanB(std::string name);
      ~HumanB();

      void  attack();
      void  setWeapon(Weapon& newWeapon); // pass by reference
};

#endif