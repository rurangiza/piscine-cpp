/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:55 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/14 15:56:25 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/UserInterface.hpp"

void
UserInterface::header( void ) const {

    std::cout /* << "-----" */ << std::endl << "INFO: ";
    std::cout << CGREEN << "||" << CRESET << " constructor "
              << CRED << "||" << CRESET << " destructor "
              << CYELLOW << "|" << CRESET << " copy/assignement "
              << CBLUE << "•" << CRESET << " actions"
              << std::endl
              /* << "-----" */ << std::endl;
}