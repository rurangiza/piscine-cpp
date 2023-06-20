/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/20 14:27:10 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

// void whoAreYou(Zombie *z) {
    
// }

Zombie backToLife(std::string name) {
    Zombie zombie(name);
    
    return (zombie);
}

int main(void) {
    Zombie zomb = backToLife("Eric");
    zomb.announce();
    return 0;
}
