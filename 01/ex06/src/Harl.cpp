/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:21:29 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 15:04:28 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

Harl::Harl(/* args */) {
    ;
}

Harl::~Harl( void ) {
    ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---
  
void
Harl::complain( std::string level ) {

     void (Harl::*func_array[4])(void);

    func_array[0] = &Harl::debug; // 3 -> 0 [+1 or -3]
    func_array[1] = &Harl::info; //     = 1 [0]
    func_array[2] = &Harl::warning; //  = 2 [0]
    func_array[3] = &Harl::error; // 0 -> 3 [-1 or +3]

    int debug_or_warning = (level[0] - 65) % 4;
    int info_or_error = (level[0]) % 3;
    int pos = debug_or_warning != 0 ? debug_or_warning : info_or_error;

    if (pos == 3)
        pos = 0;
    else if (pos == 0)
        pos = 3;

    switch (pos) {
        case 0:
            (this->*func_array[0])();
        case 1:
            (this->*func_array[1])();
        case 2:
            (this->*func_array[2])();
        case 3:
            (this->*func_array[3])();
            break ;
        default:
            std::cout << "Error (switch): expression doesn't match any constant"
                      << std::endl;
    }
        

}

void
Harl::debug( void ) {
  std::cout << std::endl << CBOLD CBLUE << "[ DEBUG ]" << CRESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. "
              << "I really do !"
              << std::endl;
}

void
Harl::info( void ) {
    std::cout << std::endl << CBOLD CBLUE << "[ INFO ]" << CRESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger ! "
              << "If you did, I wouldn’t be asking for more !"
              << std::endl;
}

void
Harl::warning( void ) {
    std::cout << std::endl << CBOLD CBLUE << "[ WARNING ]" << CRESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void
Harl::error( void ) {
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