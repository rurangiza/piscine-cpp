/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:48 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 14:26:28 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/*
 * Crée un zombie, lui donne un nom et le fait se présenter.
*/

void randomChump( std::string name ) {
    Zombie zombie(name);
    zombie.announce();
}