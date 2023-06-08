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
    this->m_first_name = "";
    this->m_last_name = "";
    this->m_nickname = "";
    this->m_darkest_secret = "";
};

Contacts::~Contacts() {
    this->m_first_name.clear();
    this->m_last_name.clear();
    this->m_nickname.clear();
    this->m_darkest_secret.clear();
};

//===---===---===---===---===---===---===---===---===---===---===---===---===---

const std::string Contacts::getFirstName() {
    return m_first_name;
};

std::string Contacts::getLastName() {
    return m_last_name;
};

std::string Contacts::getNickname() {
    return m_nickname;
};

std::string Contacts::getDarkestSecret() {
    return m_darkest_secret;
};

int Contacts::getPhonenumber() {
    return m_phonenumber;
};

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
Contacts::setFirstName(std::string firstname) {
    m_first_name = firstname;
};

void
Contacts::setLastName(str::string lastname) {
    m_last_name = lastname;
};

void
Contacts::setNickname(std::string nickname) {
    m_nickname = nickname;
};

void
Contacts::setPhonenumber(int number) {
    m_phonenumber = number;
};

void
Contacts::setDarkestSecret(std::string secret) {
    m_darkest_secret = secret;
};
