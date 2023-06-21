/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:57:25 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/21 13:00:16 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "helpers.h"

int main(void) {
                                                                                /**/ std::cout << CBOLD << "_start main()" << CRESET << std::endl;
    // Declaration
    Zombie z_stack = newZombie_bis( "Eric_stack" );                             ///**/ std::cout << "↳ at " << &z_stack << ": in main()" << std::endl;
    Zombie *z_heap = newZombie( "Michael_heap" );                               /*  std::cout << "↳ at " << &z_heap << ": in main()" << std::endl; */   std::cout << "---" << std::endl;

    // change scope
    changeScope_stack( z_stack );
    changeScope( z_heap );                                                      /**/ std::cout << "---" << std::endl;
                                                                                ///**/ std::cout << "↱ at " << &z_heap << ": in main()" << std::endl;
    // back in main
    delete z_heap;
                                                                                /**/ std::cout << CBOLD << "_end main()" << CRESET << std::endl;
                                                                                ///**/ std::cout << "↱ at " << &z_stack << ": in main()" << std::endl;
    return 0;
}
