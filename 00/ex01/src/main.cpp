/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:ex00:56 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:ex00:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.h"

UserInterface ui;

int
main() {
    Phonebook   phonebook;
    std::string input;

    system("clear");
    while (true) {
        ui.prompt(0, USER_INPUT_MSG);
        std::getline(std::cin, input);

        if (input.empty())
          continue ;

        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            break ;
        else
            ui.err_msg(4, "invalid command");

        input.clear();
    }
    return (EXIT_SUCCESS);
}
