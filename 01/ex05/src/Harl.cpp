/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:21:29 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 10:55:03 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

// 

void Harl::complain( std::string level ) {

    void (Harl::*func_array[4])(void);

    func_array[0] = &Harl::error;
    func_array[1] = &Harl::info;
    func_array[2] = &Harl::warning;
    func_array[3] = &Harl::debug;

    int debug_or_warning = (level[0] - 65) % 4;
    int info_or_error = (level[0]) % 3;
    int pos = debug_or_warning != 0 ? debug_or_warning : info_or_error;
    
    (this->*func_array[pos])();
}

void Harl::debug( void ) {
    
    std::cout << std::endl << CBOLD CBLUE << "[ DEBUG ]" << CRESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. "
              << "I really do !"
              << std::endl;
}

void Harl::info( void ) {
    std::cout << std::endl << CBOLD CBLUE << "[ INFO ]" << CRESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger ! "
              << "If you did, I wouldn’t be asking for more !"
              << std::endl;
}

void Harl::warning( void ) {
    std::cout << std::endl << CBOLD CBLUE << "[ WARNING ]" << CRESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void Harl::error( void ) {
    std::cout << std::endl << CBOLD CBLUE << "[ ERROR ]" << CRESET << std::endl;
    std::cout << "This is unacceptable ! "
              << "I want to speak to the manager now."
              << std::endl;
}

bool isValidComment(std::string comment) {
    if (comment != "DEBUG"
        && comment != "INFO"
        && comment != "WARNING"
        && comment != "ERROR")
        return false;
    return true;
}