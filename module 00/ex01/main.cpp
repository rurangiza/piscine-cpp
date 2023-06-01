/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:17:25 by lupin             #+#    #+#             */
/*   Updated: 2023/06/01 22:55:15 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.class.hpp"

int
main(void) {
    Phonebook phonebook;    
    string input;

    while (true) {
		input = "";
        std::cout << USER_INPUT_MSG << endl << "> ";
        std::cin >> input;

        if (input == "ADD")
            phonebook.add(phonebook);
        else if (input == "SEARCH")
            phonebook.search(phonebook);
        else if (input == "EXIT") {
            std::cout << "Exiting";
			return (0);
		}
    }
    return (EXIT_SUCCESS);
}