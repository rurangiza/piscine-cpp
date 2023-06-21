/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:58:33 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 13:18:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
#define HELPERS_H

#include "Zombie.h"

void    changeScope_heap( Zombie *zomb );
void    changeScope_stack( Zombie zombie );
Zombie  newZombie_bis( std::string name );

#endif