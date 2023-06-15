/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:08:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 15:48:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/Harl.h"

int
main(int ac, char *av[]) {
    if (ac != 2) {
        std::cout << "Error (usage): needs exactly 2 arguments" << std::endl;
        return (1);
    }

    std::string level = av[1];
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
        std::cout << "Error (usage): only 4 valid commands" << std::endl
                  << "|_ " << "(1)DEBUG, " << "(2)INFO, " << "(3)WARNING, " << "(4)ERROR"
                  << std::endl;
        return (1);
    }

    // int debug_or_warning = (level[0] - 65) % 4;
    // std::cout << level << ": " << debug_or_warning << std::endl;
    // int info_or_error = (level[0]) % 3;
    // // std::cout << level << ": " << info_or_error << std::endl;
    // int pos = debug_or_warning != 0 ? debug_or_warning : info_or_error;

    // std::cout << level << " at " << pos << std::endl;

    Harl harl;

    harl.complain(level);

    return 0;
}