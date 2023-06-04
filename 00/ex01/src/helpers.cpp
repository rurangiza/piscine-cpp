/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:00:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:00:53 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.class.h"

bool isNumber(std::string str) {
    for (size_t i = 0; str[i]; i++) {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

std::string truncate(const std::string& str, size_t width) {
    if (str.length() > width)
        return str.substr(0, width-1) + ".";
    return (str);
}

std::string addSpace(int n) {
    std::string str = "";
    while (n > 0) {
        str += " ";
        n--;
    }
    return str;
}