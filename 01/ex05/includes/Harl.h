/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:22:15 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 10:57:13 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

#include "constants.h"

#define MSG_INVALID_COM "only 4 valid commands, (1)DEBUG - (2)INFO - (3)WARNING or (4)ERROR)"
#define MSG_INVALID_ARGS "two arguments needed"


class Harl {
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

bool isValidComment(std::string comment);

#endif