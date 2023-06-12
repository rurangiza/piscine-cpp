/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:58:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 14:22:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie();

        void announce(void);

    private:
        std::string m_name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
