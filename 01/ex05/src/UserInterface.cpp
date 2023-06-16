/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:54:16 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 20:54:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.h"

// UserInterface::UserInterface() {
//     ;
// }

// UserInterface::~UserInterface() {
//     ;
// }

void
UserInterface::errmsg(std::string type, std::string msg) {
    std::cout << CRED CBOLD "Error " CRESET 
              << "(" << type << ") : "
              << msg << std::endl;
    
}