/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:41 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/19 15:20:02 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>

class Contacts {

    public:
        Contacts();
        //~Contacts();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getDarkestSecret() const;
        std::string getPhoneNumber() const;
        
        void    setFirstName(std::string firstname);
        void    setLastName(std::string name);
        void    setNickname(std::string nickname);
        void    setPhoneNumber(std::string number);
        void    setDarkestSecret(std::string secret);

    private:
        std::string   m_first_name;
        std::string   m_last_name;
        std::string   m_nickname;
        std::string   m_phonenumber;
        std::string   m_darkest_secret;
        
};

#endif
