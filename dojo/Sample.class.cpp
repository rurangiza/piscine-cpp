/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:42:58 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 19:38:16 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor[1] called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor[1] called" << std::endl;
	return;
}

void
Sample::bar(void)
{
	std::cout << "Des barres de chocolats" << std::endl;
	return;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

Sample2::Sample2(char p1, int p2, float p3)
: a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor[2] called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	return;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor[2] called" << std::endl;
	return;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

Sample3::Sample3(float const f) : pi(0.34)
{
	std::cout << "Constructor[3] called" << std::endl;
	
	std::cout << "f = " << pi << std::endl;
	std::cout << "Hello" << std::endl;
	return;
}

Sample3::~Sample3(void)
{
	std::cout << "Destructor[3] called" << std::endl;
	return;
}
