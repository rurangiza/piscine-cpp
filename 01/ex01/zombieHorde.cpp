/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:30:09 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 16:47:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*
zombieHorde( int N, std::string name ) {
  
  Zombie *horde = new Zombie[N];
  
  int i = 0;
  while (i < N) {
    horde[i].setName(name + std::to_string(i));
    i++;
  }

  system("leaks zombieland");
  
  return (horde);
}