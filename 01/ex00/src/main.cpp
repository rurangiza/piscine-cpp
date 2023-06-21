/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 14:16:37 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "helpers.h"


int main(void) {
                                                                                /**/ std::cout << std::endl << CBOLD << "_start main()" << CRESET << std::endl;
    Zombie z_stack = newZombie_bis( "Eric_stack" );                             /* std::cout << CBLUE << "↳ at " << CRESET << &z_stack << std::endl; */
    Zombie *z_heap = newZombie( "Michael_heap" );                               /* std::cout << "↳ at " << &z_heap << std::endl; */  std::cout << std::endl << "_changeScope()" << std::endl;

    changeScope_stack( z_stack );
    changeScope_heap( z_heap );                                                 /**/ std::cout << std::endl << "_main()" << std::endl;
                                                                                /* std::cout << CBLUE << "↱ at " << CRESET << &z_heap << std::endl; */
    delete z_heap;
                                                                                /**/ std::cout << CBOLD << "_end main()" << CRESET << std::endl;
                                                                                /* std::cout << CBLUE << "↱ at " << CRESET << &z_stack << std::endl; */
    return 0;
}
