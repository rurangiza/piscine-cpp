/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:11:05 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/20 11:13:53 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class UserInterface {
	private:
	public:
		std::string spacedString(std::string s, int width) {
			std::string str = "";
			str << s << setw(10);
		}
};