/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:22:15 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 17:49:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

#include "constants.h"

class Harl
{
    private:
      void debug( void );
      void info( void );
      void warning( void );
      void error( void );

    public:
        Harl();
        ~Harl();

        void complain( std::string level );
};

#endif