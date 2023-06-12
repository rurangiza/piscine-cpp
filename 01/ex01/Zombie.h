/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:58:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 16:29:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <iostream>
#include <string>

#include "common.h"

class Zombie {
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie();

        void    announce(void);
        void    setName(std::string name);

    private:
        std::string m_name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
