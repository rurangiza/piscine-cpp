//
// Created by Arsène Rurangiza on 02/06/2023.
//

#include "../includes/Phonebook.class.hpp"

bool isNumber(std::string str) {
    for (int i = 0; str[i]; i++) {
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