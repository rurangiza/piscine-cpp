/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:51:49 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 16:13:50 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "common.h"

int
main() {
  
  std::string message = "HI THIS IS BRAIN";
  std::string *stringPTR = &message;
  std::string &stringREF = *stringPTR; //message;
  
  std::cout << CGREEN << "• std::string var = \"HI THIS IS BRAIN\"" << CRESET
            << std::endl << "__ printing address of" << std::endl;

  std::cout << CBLUE << std::setw(16) << std::left
            << "• string variable " << CRESET
            << &message
            << std::endl;
  std::cout << CBLUE << std::setw(16) << std::left
            << "↳ ptr to variable " << CRESET
            << stringPTR
            << std::endl;
  std::cout << CBLUE << std::setw(16) << std::left
            << "↳ ref to variable " << CRESET
            << &stringREF
            <<std::endl;

  return 0;
}