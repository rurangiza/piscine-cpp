/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:08:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 17:11:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include "UserInterface.h"

int
main(int ac, char *av[]) {
    UserInterface   ui;

    if (ac != 2) {
        ui.errmsg("usage", MSG_INVALID_ARGS);
        return (1);
    }

    std::string level = av[1];
    if (!isValidComment(level)) {
        ui.errmsg("usage", MSG_INVALID_COM);
        return (1);
    }

    Harl harl;
    harl.complain(level);

    return 0;
}