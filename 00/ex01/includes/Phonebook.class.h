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


#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include "common.h"
#include "Contacts.class.h"

#define USER_INPUT_MSG "ADD, SEARCH or EXIT the phonebook: "
#define SEARCH_MSG "Who are you looking for?"
#define ERR_NOTNUM "                 ^ not a number. try again"

#define MAX_CONTACTS 8

class Phonebook {

    private:
      Contacts	contacts[MAX_CONTACTS];
      int         size;
      bool        is_empty;

      static std::string get_input(const std::string& type, const std::string& prefix);
      void showAllContacts() const;
      void showOneContact(std::string contact_name) const;

    public:
      Phonebook();
      ~Phonebook();

      void add();
      void search() const;
      void fill();
};

std::string truncate(const std::string& str, size_t width);
bool        isNumber(std::string str);
std::string addSpace(int n);

#endif