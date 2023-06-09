/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:ex00:33 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:ex00:38 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contacts.class.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Contacts::Contacts() {
    m_first_name = "";
    m_last_name = "";
    m_nickname = "";
    m_darkest_secret = "";
};

Contacts::~Contacts() {
    m_first_name.clear();
    m_last_name.clear();
    m_nickname.clear();
    m_darkest_secret.clear();
};

//===---===---===---===---===---===---===---===---===---===---===---===---===---

std::string
Contacts::getFirstName() {
    return m_first_name;
};

std::string
Contacts::getLastName() {
    return m_last_name;
};

std::string
Contacts::getNickname() {
    return m_nickname;
};

std::string
Contacts::getDarkestSecret() {
    return m_darkest_secret;
};

std::string
Contacts::getPhoneNumber() {
    return m_phonenumber;
};

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
Contacts::setFirstName(std::string firstname) {
    m_first_name = firstname;
};

void
Contacts::setLastName(std::string lastname) {
    m_last_name = lastname;
};

void
Contacts::setNickname(std::string nickname) {
    m_nickname = nickname;
};

void
Contacts::setPhoneNumber(std::string number) {
    m_phonenumber = number;
};

void
Contacts::setDarkestSecret(std::string secret) {
    m_darkest_secret = secret;
};
