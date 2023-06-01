/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:23:49 by lupin             #+#    #+#             */
/*   Updated: 2023/06/01 22:51:17 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAGAPHONE_CLASS_H
#define MAGAPHONE_CLASS_H

#include <iostream>

#define USER_INPUT_MSG "Enter input (ADD, SEARCH or EXIT): "

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::uint8_t;

class Contacts { // can't have empty fields

    public:
        string  first_name;
        string  last_name;
        string  nickname;
        int     phonenumber;
        string  darkest_secret;
};

class Phonebook {

    public:
        Contacts	contacts[8];
        uint8_t		size;
		Phonebook();
		~Phonebook();

		void add(Phonebook phonebook);
		void search(Phonebook phonebook);
};

#endif