/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:27:24 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 14:37:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	char	buffer[512];

	std::cout << "Hello, world !" << std::endl;
	
	std::cout << "Input a word: ";
	std::cin >> buffer;
	std::cout << "You entered: [" << buffer << "]" << std::endl;

	int bucket = 1000 * std::atoi("45654");
	std::cout << bucket << std::endl;
}