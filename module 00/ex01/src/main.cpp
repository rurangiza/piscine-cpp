/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:17:25 by lupin             #+#    #+#             */
/*   Updated: 2023/06/02 12:16:20 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.hpp"

int
main() {
    Phonebook phonebook;    
    string input;

    while (true) {
        std::cout << CBOLD CBLUE USER_INPUT_MSG CRESET << endl
            << CBLUE "↳ " CRESET;
        std::getline(std::cin >> std::ws, input);

        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            break ;
        else if (input == "FILL")
            phonebook.fill();
        else
            std::cerr << addSpace(4) << CRED "^ error: invalid command" CRESET << endl;

        input.clear();
    }
    return (EXIT_SUCCESS);
}