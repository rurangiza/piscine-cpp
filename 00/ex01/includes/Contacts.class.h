/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:01:41 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:01:43 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>

class Contacts { // can't have empty fields

    public:
        std::string   first_name;
        std::string   last_name;
        std::string   nickname;
        std::string   phonenumber;
        std::string   darkest_secret;
};

#endif
