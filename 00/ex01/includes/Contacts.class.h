/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:41 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/08 16:49:32 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>

class Contacts {

    public:
        Contacts();
        ~Contacts();
        
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getDarkestSecret();
        std::string getPhoneNumber();
        
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
