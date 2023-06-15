/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:21:29 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 10:35:25 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

Harl::Harl(/* args */)
{
}

Harl::~Harl( void )
{
}

// 

void
Harl::complain( std::string level ) {
    if (level == "DEBUG")
        ; // call debug()
    else if (level == "INFO")
        ; // call info()
    else if (level == "WARNING")
        ; // call warning()
    else if (level == "ERROR")
        ; // call error()
}

void
Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. "
              << "I really do !"
              << std::endl;
}

void
Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger ! "
              << "If you did, I wouldn’t be asking for more !"
              << std::endl;
}

void
Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void
Harl::error( void ) {
    std::cout << "This is unacceptable ! "
              << "I want to speak to the manager now."
              << std::endl;
}
