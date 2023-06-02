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
main(void) {
    Phonebook phonebook;    
    string input;

    while (true) {
        std::cout << CBOLD CBLUE USER_INPUT_MSG CRESET << endl
            << CGRAY "> " CRESET;
        std::cin >> input;

        if (input == "ADD") {
            phonebook.add();
            std::cout << "Index: " << phonebook.size << endl;
        }
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            break ;
        input.clear();
    }
    return (EXIT_SUCCESS);
}