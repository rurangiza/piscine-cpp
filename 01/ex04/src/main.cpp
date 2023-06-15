/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:18:18 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/15 01:18:14 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "../includes/constants.h"

int
main( int arg_count, char *arg_list[] ) {

    // check for valid arguments
    if (arg_count != REQUIRED_ARGUMENTS) {
        std::cerr << ERR_ARGS;
        return ( ERR_CODE );
    }

    // store arguments in more readable variables
    std::string filename(arg_list[1] );
    std::string s1( arg_list[2] );
    std::string s2( arg_list[3] );

    // open infile in READ mode
    std::ifstream infile( "./assets/" + filename );
    if ( infile.is_open() )
    {
        // open outfile in APPEND mode
        std::ofstream outfile;
        outfile.open( "./assets/" + filename + ".replace", std::ios::app );
        if ( !outfile ) {
            std::cerr << ERR_FOPEN << filename << ".replace" << std::endl;
            infile.close();
            return ( ERR_CODE );
        }
        // read infile one line at a time
        std::string line;
        while ( std::getline(infile, line) ) {
            // look for occurences
            size_t pos = line.find(s1);
            while ( pos != std::string::npos ) {
                // replace occurence (s1) with (s2)
                line.erase(pos, s1.size());
                line.insert(pos, s2);
                pos = line.find(s1);
            }
            // APPEND current line to oufile
            outfile << line << std::endl;
        }
        outfile.close();
        infile.close();
        return ( EXIT_SUCCESS );
    }

    std::cerr << ERR_FOPEN << filename << std::endl;
    return ( ERR_CODE );
}