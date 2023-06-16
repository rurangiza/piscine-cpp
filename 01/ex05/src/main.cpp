/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:08:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 20:50:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include "UserInterface.h"

int
main(int ac, char *av[]) {
    UserInterface   ui;
    
    if (ac != 2) {
        ui.errmsg("usage", "two arguments needed");
        return (1);
    }

    std::string level = av[1];
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
        ui.errmsg("usage", "only 4 valid commands, (1)DEBUG - (2)INFO - (3)WARNING or (4)ERROR)");
        return (1);
    }

    Harl harl;
    harl.complain(level);

    return 0;
}