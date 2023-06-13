/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:06:06 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/13 13:13:18 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.h"
#include "../includes/HumanA.h"
#include "../includes/HumanB.h"

int
main() {

    {
      Weapon club = Weapon("spear");
      HumanA bob("Bob", club); // const reference: since I won't assign another class of weapon
      bob.attack();
      club.setType("spear Ultimate");
      bob.attack();
    }
    {
      Weapon club = Weapon("dagger");
      HumanB jim("Jim");
      jim.setWeapon(club); // pointer: since I can assign another class of weapon 
      jim.attack();
      club.setType("dagger Ultimate");
      jim.attack();
    }

  return 0;
}
