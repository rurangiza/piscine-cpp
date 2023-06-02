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

Phonebook::~Phonebook(void) {
    return ;
}

void Phonebook::add(void) {
    Contacts	new_contact;
    uint8_t		index;

    std::cout << endl << "*** Fill in the form ***" << endl;
    
	std::cout << CGRAY "> " CRESET << "First Name: ";
    std::cin >> new_contact.first_name;
	
	std::cout << CGRAY "> " CRESET << "Last Name: ";
    std::cin >> new_contact.last_name;
	
	std::cout << CGRAY "> " CRESET << "Nickname: ";
    std::cin >> new_contact.nickname;
	
	std::cout << CGRAY "> " CRESET << "Darkest secret: ";
    std::cin >> new_contact.darkest_secret;

    std::string tmp;
    while (true) {
        tmp.clear();
        std::cout << "> Phone number: ";
        std::getline(cin >> std::ws, tmp);
//        std::cin >> tmp;
        if (isNumber(tmp)) {
            std::istringstream iss(tmp);
            if (iss >> new_contact.phonenumber) {
                break;
            }
        }
        std::cout << CRED ERR_NOTNUM CRESET << endl;
        tmp.clear();
    }

    std::cout << "------------------------------------" << endl;
    
    if (this->size < 8) {
        index = this->size;
        this->size++;
    }
    else
        index = this->size % 8;
    this->contacts[index] = new_contact;
    this->is_empty = false;
}

void Phonebook::search(void) {
    string contact_name;

    if (this->is_empty) {
        std::cout << CORANGE "    The phonebook is empty" CRESET << std::endl;
        return ;
    }
    this->showAllContacts();

    std::cout << CBLUE CBOLD SEARCH_MSG CRESET <<  "\n> ";
    std::cin >> contact_name;
    this->showOneContact(contact_name);
}

void  Phonebook::showAllContacts() {
    int i = 0;

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "Firstname" << " | ";
    std::cout << std::setw(10) << std::right << "Lastname" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << endl;
    std::cout << "---------- + ---------- + ---------- + ----------" << std::endl;

    while (i < this->size) {
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
            std::cout << "  First name: " << this->contacts[i].first_name << std::endl;
            std::cout << "  Last name: " << this->contacts[i].last_name << std::endl;
            std::cout << "  Nickname: " << this->contacts[i].nickname << std::endl;
            std::cout << "  Phone number: " << this->contacts[i].phonenumber << std::endl;
            std::cout << "  Darkest secret: " << this->contacts[i].darkest_secret << std::endl;
            return ;
        }
        i++;
    }
    std::cout << CORANGE "Not found" CRESET << std::endl;
}