/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:18:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/14 10:48:16 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "../includes/constants.h"

int
main( int arg_count, __unused char *arg_list[] ) {
  
  if (arg_count != 4) {
    std::cerr << ERR_ARGS;
    return ( ERR_CODE );
  }

  std::string filename(arg_list[1] );
  std::string s1( arg_list[2] );
  std::string s2( arg_list[3] );

  // open input
  std::ifstream infile( "./assets/" + filename );
  if ( infile.is_open() ) {
    // open outfile file
    std::ofstream outfile;
    outfile.open( "./assets/" + filename+".replace", std::ios::app );
    if ( !outfile ) {
      std::cerr << ERR_FOPEN << filename << ".replace" << std::endl;
      infile.close();
      return ( ERR_CODE );
    }
  
    // copy infile into outfile
    char   line[80];
    while ( infile.getline(line, 80) ) { // read one line at a time till EOF
      std::cout << "> " << line << std::endl;
      // in <filename>.replace, replace each occurence of <s1> with <s2>
    }
    outfile.close();
    return ( EXIT_SUCCESS );
  }

  std::cerr << ERR_FOPEN << filename << std::endl;
  return ( ERR_CODE );
}