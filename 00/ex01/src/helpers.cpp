/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:ex00:51 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/04 21:ex00:53 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/helpers.h"

bool
is_onlyDigits(std::string str) {
    for (size_t i = 0; str[i]; i++) {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool
is_onlyLetters(std::string str) {
    for (size_t i = 0; str[i]; i++) {
        if (!std::isalpha(str[i]) && !std::isspace(str[i]))
            return (false);
    }
    return (true);
}

std::string
truncate(const std::string& str, size_t width) {
    if (str.length() > width)
        return str.substr(0, width-1) + ".";
    return (str);
}

std::string
addSpace(int n) {
    std::string str = "";
    while (n > 0) {
        str += " ";
        n--;
    }
    return str;
}

int
is_all_spaces(std::string str) {
    size_t i = 0;
    while (str[i]) {
        if (str[i] != ' ')
            return false;
        i++;
    }
    return true;
}

std::string
ignoreSpaces(std::string str) {
    // std::istringstream iss(str);

    // std::string word;
    // while (iss >> word)
    //     ;
    // return word;

    size_t start = 0;
    while (start < str.size() && isspace(str[start]))
        start++;

    size_t end = str.size() - 1;
    while (end > 0 && isspace(str[end]))
        end--;
    
    return str.substr(start, end);

}

void
handle_signal(int signal) {
    if (signal == SIGQUIT) {
        std::cout << std::endl << "Input was Ctrl^\\ (SIGQUIT)" << std::endl;
        exit(1);
    }
}