/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:35:09 by arurangi          #+#    #+#             */
/*   Updated: 2023/07/04 15:10:33 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/UserInterface.hpp"

void UserInterface::banner( std::string msg ) {
    std::cout << std::endl << "--" << std::endl;
    std::cout << CBOLD << "|  " << msg << "  |" << CRESET << std::endl;
    std::cout << "--" << std::endl << std::endl;
}

void UserInterface::add(Fixed& a, Fixed& b){
    std::cout << a << " + " << b << " = "
              << CGREEN << (a + b) << CRESET << std::endl;
}
void UserInterface::sub(Fixed& a, Fixed& b) {
    std::cout << a << " - " << b << " = "
              << CGREEN << (a - b) << CRESET << std::endl;
}
void UserInterface::mult(Fixed& a, Fixed& b) {
    std::cout << a << " * " << b << " = "
              << CGREEN << (a * b) << CRESET << std::endl;
}
void UserInterface::div(Fixed& a, Fixed& b) {
    std::cout << a << " / " << b << " = "
              << CGREEN << (a / b) << CRESET << std::endl;
}

void UserInterface::big(const Fixed& a, const Fixed& b) const {
    std::cout << a << " > " << b << " = "
              << CBLUE <<  std::boolalpha << (a > b) << CRESET << std::endl;
}
void UserInterface::bigeq(const Fixed& a, const Fixed& b) const {
    std::cout << a << " >= " << b << " = "
              << CBLUE <<  std::boolalpha << (a >= b) << CRESET << std::endl;
}
void UserInterface::small(const Fixed& a, const Fixed& b) const {
        std::cout << a << " < " << b << " = "
              << CBLUE <<  std::boolalpha << (a < b) << CRESET << std::endl;
}
void UserInterface::smalleq(const Fixed& a, const Fixed& b) const {
        std::cout << a << " <= " << b << " = "
              << CBLUE <<  std::boolalpha << (a <= b) << CRESET << std::endl;
}
void UserInterface::equal(const Fixed& a, const Fixed& b) const {
        std::cout << a << " == " << b << " = "
              << CBLUE <<  std::boolalpha << (a == b) << CRESET << std::endl;
}