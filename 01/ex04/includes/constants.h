/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constants.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:03:06 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/14 18:45:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

// ERRORS
#define ERR_FOPEN "Error: when opening the file: "
#define ERR_ARGS "Error: invalid number of arguments\n"

#define ERR_CODE 2
#define REQUIRED_ARGUMENTS 4

// Colors
#define CBLACK    "\033[0;30m"
#define CRED      "\033[0;31m"
#define CGREEN    "\033[0;32m"
#define CBLUE    "\033[0;94m"
#define CYELLOW   "\033[0;33m"
#define CMAGENTA  "\033[0;35m"
#define CRESET    "\033[0m"
#define CBOLD     "\x1b[1m"

#endif