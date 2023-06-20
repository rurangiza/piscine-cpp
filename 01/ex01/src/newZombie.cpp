/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:41 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 16:36:54 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/* Crée un zombie, lui donne un nom et le retourne afin qu’il puisse
 * être utilisé en dehors de la portée de la fonction.
*/

Zombie* newZombie( std::string name ) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}