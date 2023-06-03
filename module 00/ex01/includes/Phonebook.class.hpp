/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:23:49 by lupin             #+#    #+#             */
/*   Updated: 2023/06/02 12:29:34 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAGAPHONE_CLASS_H
#define MAGAPHONE_CLASS_H

#include <iostream>
#include <iomanip>

#define USER_INPUT_MSG "ADD, SEARCH or EXIT the phonebook: "
#define SEARCH_MSG "Who are you looking for?"
#define ERR_NOTNUM "                 ^ not a number. try again"

#define MAX_CONTACTS 8

#define CGRAY "\033[0;36m"
#define CRED "\033[0;31m"
#define CGREEN "\033[0;32m"
#define CORANGE "\033[0;33m"
#define CBLUE "\033[0;34m"
#define CRESET "\033[0m"
#define CBOLD "\033[1m"

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
        int         size;
        bool        is_empty;
    
		Phonebook();
		~Phonebook();

		void add(void);
		void search(void);
        void showAllContacts(void);
        void showOneContact(string contact_name);
        void fill(void);
};

std::string truncate(const std::string& str, size_t width);
bool        isNumber(std::string str);
std::string addSpace(int n);

#endif