

#include "../includes/Phonebook.class.h"

UserInterface ui;

int
main() {
    Phonebook phonebook;

    while (true) {
        ui.prompt(0, USER_INPUT_MSG);

        std::string input;
        std::getline(std::cin >> std::ws, input);

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