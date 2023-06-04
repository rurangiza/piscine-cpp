/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:47 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:01:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include "common.h"
#include "Contacts.class.h"

#define USER_INPUT_MSG "ADD, SEARCH or EXIT the phonebook: "
#define SEARCH_MSG "Enter the index of a contact:"
#define ERR_NOTNUM "                 ^ not a number. try again"

#define MAX_CONTACTS 8

class Phonebook {

    private:
      Contacts	contacts[MAX_CONTACTS];
      int         size;
      bool        is_empty;

      static std::string get_input(const std::string& type, const std::string& prefix);
      void showAllContacts() const;
      void showOneContact(int contact_index) const;

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