/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:51:49 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 17:17:56 by arurangi         ###   ########.fr       */
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
  
  std::setw(10);
  
  std::cout << CBOLD "Printing memory addresses of:" CRESET << std::endl;
  // print memory address of {message}
  std::cout << std::setw(13) << std::left
            << "> message  :" << &message << std::endl;
  // print memory address held by stringPTR
  std::cout << std::setw(13) << std::left
            << "> stringPTR:"<< stringPTR << std::endl;
  // print memory address held by stringREF
  std::cout << std::setw(13) << std::left
            << "> stringREF:"<< &stringREF << std::endl;

  return 0;
}