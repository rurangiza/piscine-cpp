/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:08:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 15:07:33 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"
#include "UserInterface.h"

int
main(int ac, char *av[]) {
    UserInterface   ui;
    
    if (ac != 2) {
        ui.errmsg("usage", "two arguments needed");
        return (1);
    }

    std::string level = av[1];
    if (!isValidComment(level)) {
        std::cout << CBOLD CBLUE
                  << MSG_RANDOM_COMPLAIN CRESET
                  << std::endl;
        return (0);
    }
    
    Harl harl;
    harl.complain(level);

    return 0;
}