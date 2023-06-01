/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:43:37 by lupin             #+#    #+#             */
/*   Updated: 2023/06/01 15:08:08 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// using std::cout;
// using std::endl;
// using std::toupper;
// using std::uint8_t;
// using std::string;

int
errmsg(const char *msg, std::uint8_t code) {
	std::cout << "\033[1;31m" << "Error: " << "\033[0m" << std::endl;
	std::cout << msg << std::endl;
	return code;
}

int
main(int ac, char **args) {
	std::uint8_t i = 1, j;
	
	if (ac == 1)
		return (errmsg("Usage: ./megaphone <string>", 0));

	while (i < ac) {
		j = 0;
		while (args[i][j]) {
			args[i][j] = std::toupper(args[i][j]);
			j++;
		}
		std::cout << args[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}