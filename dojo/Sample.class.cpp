/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:42:58 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 15:15:31 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

	return;
}

Sample::~Sample(void)
{

	std::cout << "Destructor called" << std::endl;
	return;
}

void
Sample::bar(void)
{
	std::cout << "Des barres de chocolats" << std::endl;
	return;
}