/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:21 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:01:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.h"
#include <sstream>

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Phonebook::Phonebook() {
    size = 0;
    is_empty = true;
};

Phonebook::~Phonebook() {
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

/* Add new contact to phonebook after prompting for input */
void
Phonebook::add() {
    Contacts	new_contact;

    ui.subprompt(2, "Fill in the form");

    new_contact.first_name = get_input("string", "First Name ... : ");
    new_contact.last_name = get_input("string", "Last Name .... : ");
    new_contact.nickname = get_input("string", "Nickname ..... : ");
    new_contact.darkest_secret = get_input("string", "Darkest secret : ");
    new_contact.phonenumber = get_input("number", "Phone number . : ");

    ui.succ_msg(4, "Contact added to the phonebook");

    this->contacts[this->size % MAX_CONTACTS] = new_contact;
    this->size++;
    this->is_empty = false;
}

int is_all_spaces(std::string str) {
    int i = 0;
    while (str[i]) {
        if (str[i] != ' ')
            return false;
        i++;
    }
    return true;
}

/* Save user input in contact fields */
std::string
Phonebook::get_input(const std::string& type, const std::string& prefix) {
    std::string tmp;

    while (true) {
        ui.list(4, prefix, "", false);
        std::getline(std::cin, tmp);
        if (tmp.empty() || is_all_spaces(tmp))
            ui.err_msg(8, "empty. you must enter something");
        else if (type == "number" && !isNumber(tmp))
            ui.err_msg(8, "not a number");
        else
            break ;
    }
    return tmp;
}

/* Look for a specific contact after displaying entire phonebook */
void
Phonebook::search() const {
    if (this->is_empty) {
        ui.warn_msg(4, "The phonebook is empty. Add a contact");
        return ;
    }

    this->showAllContacts();

    int contact_index;
    while (true) {
        ui.inlineprompt(2, SEARCH_MSG); // print message
        std::cin >> std::dec >> contact_index;
        if (!std::cin.fail()) {
            break ;
        }
        ui.err_msg(13, "invalid input ^");
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    this->showOneContact(contact_index);

    std::cin.ignore(1, '\n');
}

/* Show all contacts currently in phonebook */
void
Phonebook::showAllContacts() const {

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "Firstname" << " | ";
    std::cout << std::setw(10) << std::right << "Lastname" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "---------- + ---------- + ---------- + ----------" << std::endl;

    int i = 0;
    while (i < this->size) {
        if (i >= 8)
            break ;
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(contacts[i].first_name, 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(this->contacts[i].last_name, 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(this->contacts[i].nickname, 10) << std::endl;
        i++;
    }
    std::cout << "-------------------------------------------------" << std::endl;
}

/* Look for specific contact. Display if found else return error message */
void
Phonebook::showOneContact(int contact_index) const {

    int i = 0;
    while (i < this->size) {
        if (i == contact_index) {
            ui.list(4, "First name ... : ", this->contacts[i].first_name, true);
            ui.list(4, "Last name .... : ", this->contacts[i].last_name, true);
            ui.list(4, "Nickname ..... : ", this->contacts[i].nickname, true);
            ui.list(4, "Phone number . : ", this->contacts[i].phonenumber, true);
            ui.list(4, "Darkest secret : ", this->contacts[i].first_name, true);
            return ;
        }
        i++;
    }
    std::cout << addSpace(4) << CORANGE "No contact at index [" << contact_index << "]" CRESET << std::endl;
}

/* Fill phonebook with dummy contacts */
void
Phonebook::fill() {

    Contacts person = {
        "John",
        "Doe",
        "Unknown",
        "0483872256",
        "Nothing special"
    };

    int i = this->size;
    while (i < 8) {
        this->contacts[i] = person;
        this->size++;
        i++;
    }
    this->is_empty = false;

    ui.succ_msg(4, "Filled the phonebook");
}