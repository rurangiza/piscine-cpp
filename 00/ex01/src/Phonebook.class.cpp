/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:21 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/08 16:48:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Phonebook::Phonebook() {
    m_size = 0;
    m_is_empty = true;
};

Phonebook::~Phonebook() {
    int i = 0;
    int limit = m_size > MAX_CONTACTS ? MAX_CONTACTS : m_size;
    while (i < limit)
        delete m_contacts[i++];
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

/* Add new contact to phonebook after prompting for input */
void
Phonebook::add() {
    Contacts	*new_contact;

    new_contact = new Contacts;

    ui.subprompt(2, "Fill in the form");

    new_contact->setFirstName(get_input("string", "First Name ... : "));
    new_contact->setLastName(get_input("string", "Last Name .... : "));
    new_contact->setNickname(get_input("string", "Nickname ..... : "));
    new_contact->setDarkestSecret(get_input("string", "Darkest secret : "));
    new_contact->setPhoneNumber(get_input("number", "Phone number . : "));

    ui.succ_msg(4, "Contact added to the phonebook");

    if (m_size > MAX_CONTACTS)
        delete m_contacts[m_size % MAX_CONTACTS];
    m_contacts[m_size % MAX_CONTACTS] = new_contact;
    m_size++;
    m_is_empty = false;
}

/* Save user input in contact fields */
std::string
Phonebook::get_input(const std::string& type, const std::string& prefix) {
    std::string tmp;

    while (true) {
        ui.list(4, prefix, "", false);
        std::getline(std::cin, tmp);
        if (std::cin.eof()) {
            std::cout << "Input was Ctrl^D (EOF)" << std::endl;
            exit(1);
        }

        if (tmp.empty() || is_all_spaces(tmp) || tmp.find( '\t') != std::string::npos )
            ui.err_msg( 8, "empty or contains tabs" );
        else if (type == "number" && (!is_onlyDigits(tmp) || tmp.length() != 10 || tmp[0] != '0'))
            ui.err_msg(8, "must be 10-digit long and start with zero");
        else if (type == "string" && !is_onlyLetters(tmp))
            ui.err_msg(8, "can only be letters");
        else
            break ;
    }
    tmp = ignoreSpaces(tmp);
    return tmp;
}

/* Look for a specific contact after displaying entire phonebook */
void
Phonebook::search() const {
    if (m_is_empty) {
        ui.warn_msg(4, "The phonebook is empty. Add a contact");
        return ;
    }

    this->showAllContacts();

    int contact_index;
    std::string tmp;

    // ask for index of contact
    while (true) {
        ui.inlineprompt(2, SEARCH_MSG); // print message
        std::getline(std::cin, tmp);

        if (std::cin.eof()) {
            std::cout << "\nInput was Ctrl^D (EOF)" << std::endl;
            exit(1);
        }
        if (tmp.empty())
            continue ;
        if (!std::cin.fail() && is_onlyDigits((tmp))) {
            contact_index = std::stoi(tmp);
            break ;
        }

        ui.err_msg(13, "invalid input ^");
        std::cin.clear();
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    showOneContact(contact_index);

    //std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //std::cin.ignore(1, '\n');
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
    while (i < m_size) {
        if (i >= 8)
            break ;

        std::string firstname = m_contacts[i]->getFirstName();

        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(firstname, 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(m_contacts[i]->getLastName(), 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(m_contacts[i]->getNickname(), 10) << std::endl;
        i++;
    }
    std::cout << "-------------------------------------------------" << std::endl;
}

/* Look for specific contact. Display if found else return error message */
void
Phonebook::showOneContact(int contact_index) const {

    int i = 0;
    while (i < m_size) {
        if (i == contact_index) {
            ui.list(4, "First name ... : ", m_contacts[i]->getFirstName(), true);
            ui.list(4, "Last name .... : ", m_contacts[i]->getLastName(), true);
            ui.list(4, "Nickname ..... : ", m_contacts[i]->getNickname(), true);
            ui.list(4, "Phone number . : ", m_contacts[i]->getPhoneNumber(), true);
            ui.list(4, "Darkest secret : ", m_contacts[i]->getDarkestSecret(), true);
            return ;
        }
        i++;
    }
    std::cout << addSpace(4) << CORANGE "No contact at index [" << contact_index << "]" CRESET << std::endl;
}

/* Fill phonebook with dummy contacts */

void
Phonebook::fill() {

    int i = this->m_size;
    while (i < 8) {

        Contacts *person = new Contacts;

        person->setFirstName("John");
        person->setLastName("Doe");
        person->setNickname("Unknown");
        person->setDarkestSecret("Nothing special");
        person->setPhoneNumber("0483872256");

        this->m_contacts[i] = person;
        this->m_size++;
        i++;
    }
    this->m_is_empty = false;

    ui.succ_msg(4, "Filled the phonebook");
}
