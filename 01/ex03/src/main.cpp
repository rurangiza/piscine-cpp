/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:06:06 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 16:31:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int
main() {

    {
      Weapon club = Weapon("spear");
      HumanA bob("Bob", club);
      bob.attack();
      club.setType("spear Ultimate");
      bob.attack();
    }
    {
      Weapon club = Weapon("dagger");
      HumanB jim("Jim");
      jim.setWeapon(club);
      jim.attack();
      club.setType("dagger Ultimate");
      jim.attack();
    }

  return 0;
}
