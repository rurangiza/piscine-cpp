//
// Created by Arsène Rurangiza on 09/06/2023.
//

#ifndef HELPERS_H_
#define HELPERS_H_

#include <string>
#include <sstream>

std::string truncate(const std::string& str, size_t width);
bool        is_onlyDigits(std::string str);
bool        is_onlyLetters(std::string str);
std::string addSpace(int n);
int         is_all_spaces(std::string str);
std::string ignoreSpaces(std::string str);

#endif
