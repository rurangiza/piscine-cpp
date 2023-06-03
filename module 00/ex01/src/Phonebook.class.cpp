/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:53:41 by lupin             #+#    #+#             */
/*   Updated: 2023/06/02 17:04:56 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.hpp"

#include <sstream>

Phonebook::Phonebook(void) {
    size = 0;
    is_empty = true;
    return ;
};

Phonebook::~Phonebook() {
    return ;
}

void Phonebook::add() {
    Contacts	new_contact;

    std::cout << addSpace(2) << "↳ " << CBOLD "Fill in the form" CRESET << endl;
    
	std::cout << addSpace(4) << CGRAY "○ " CRESET << "First Name ... : ";
    std::cin >> new_contact.first_name;
	
	std::cout << addSpace(4) << CGRAY "○ " CRESET << "Last Name .... : ";
    std::cin >> new_contact.last_name;
	
	std::cout << addSpace(4)  << CGRAY "○ " CRESET << "Nickname ..... : ";
    std::cin >> new_contact.nickname;
	
	std::cout << addSpace(4)  << CGRAY "○ " CRESET << "Darkest secret : ";
    std::getline(std::cin >> std::ws, new_contact.darkest_secret);

    std::string tmp;
    while (true) {
        tmp.clear();
        std::cout << addSpace(4) << CGRAY "○ " CRESET <<  "Phone number . : ";
        std::cin >> std::dec >> tmp;
        if (isNumber(tmp)) {
            std::istringstream iss(tmp);
            if (iss >> new_contact.phonenumber) {
                break;
            }
        }
        std::cout << CRED ERR_NOTNUM CRESET << endl;
        tmp.clear();
    }

    std::cout << addSpace(4) << CGREEN "✓ Contact added to the phonebook" CRESET << std::endl;

    this->contacts[this->size % MAX_CONTACTS] = new_contact;
    this->size++;
    this->is_empty = false;
}

void Phonebook::search(void) {
    string contact_name;

    if (this->is_empty) {
        std::cout << addSpace(4);
        std::cout << CORANGE "The phonebook is empty. Add a contact" CRESET << std::endl;
        return ;
    }
    this->showAllContacts();

    std::cout << addSpace(2) << "↳ " << CBOLD SEARCH_MSG CRESET << std::endl;
    std::cout << addSpace(4) << CGRAY "○ " CRESET;
    std::cin >> contact_name;
    this->showOneContact(contact_name);
}

void  Phonebook::showAllContacts() {

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "Firstname" << " | ";
    std::cout << std::setw(10) << std::right << "Lastname" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << endl;
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
}

void  Phonebook::showOneContact(string contact_name) {

    int i = 0;
    while (i < this->size) {
        if (this->contacts[i].first_name == contact_name) {
            std::cout << addSpace(4) << CGRAY "○   " CRESET << "First name ... : " << this->contacts[i].first_name << std::endl;
            std::cout << addSpace(4) << CGRAY "○   " CRESET << "Last name .... : " << this->contacts[i].last_name << std::endl;
            std::cout << addSpace(4) << CGRAY "○   " CRESET << "Nickname ..... : " << this->contacts[i].nickname << std::endl;
            std::cout << addSpace(4) << CGRAY "○   " CRESET << "Phone number . : " << this->contacts[i].phonenumber << std::endl;
            std::cout << addSpace(4) << CGRAY "○   " CRESET << "Darkest secret : " << this->contacts[i].darkest_secret << std::endl;
            return ;
        }
        i++;
    }
    std::cout << addSpace(6) << CORANGE "Couldn't find `" << contact_name << "`" CRESET << std::endl;
}

void Phonebook::fill(void) {

    Contacts person = {
        "John",
        "Doe",
        "Unknown",
        48378374,
        "Nothing special"
    };

    int i = this->size;
    while (i < 8) {
        this->contacts[i] = person;
        this->size++;
        i++;
    }
    this->is_empty = false;

    std::cout << addSpace(4) << CGREEN "✓ Filled the phonebook" CRESET << std::endl;
}