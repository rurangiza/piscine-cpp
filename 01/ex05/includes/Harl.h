/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:22:15 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 10:29:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
    private:
      void debug( void );
      void info( void );
      void warning( void );
      void error( void );

    public:
        Harl(/* args */);
        ~Harl();

        void complain( std::string level );
};
