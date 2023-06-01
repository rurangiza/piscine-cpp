/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:53:41 by lupin             #+#    #+#             */
/*   Updated: 2023/06/01 22:55:50 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.class.hpp"

Phonebook::Phonebook(void) {
    this->size = 0;
    return ;
};

Phonebook::~Phonebook(void) {
    return ;
}

void Phonebook::add(Phonebook phonebook) {
    Contacts	new_contact;
    uint8_t		index;
    
    std::cout << "Adding new contact" << endl;

	std::cout << "First Name: ";
    std::cin >> new_contact.first_name;
	
	std::cout << "Last Name: ";
    std::cin >> new_contact.last_name;
	
	std::cout << "Nickname: ";
    std::cin >> new_contact.nickname;
	
	std::cout << "Darkest secret: ";
    std::cin >> new_contact.darkest_secret;
	
	std::cout << "Phone number: ";
    std::cin >> new_contact.phonenumber;
    
    if (phonebook.size < 8)
        index = phonebook.size;
    else
        index = 0;
    phonebook.contacts[index] = new_contact;
    
    std::cout << "Finished adding new user" << endl;
    return ;
}

void Phonebook::search(Phonebook phonebook) {
    (void)phonebook;
    std::cout << "Searching specific contact" << endl;
    return ;
}