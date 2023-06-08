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

class Contacts { // can't have empty fields

    public:
        Contacts();
        ~Contacts();
        
        const std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getDarkestSecret();
        int         getPhonenumber();
        
        void    setFirstName(std::string firstname);
        void    setLastName(std::string name);
        void    setNickname(std::string nickname);
        void    setPhonenumber(int number);
        void    setDarkestSecret(std::string secret);
    
    private:
        std::string   m_first_name;
        std::string   m_last_name;
        std::string   m_nickname;
        int             m_phonenumber;
        std::string   m_darkest_secret;
        
};

#endif
