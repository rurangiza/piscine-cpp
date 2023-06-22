/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:53:14 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/22 11:04:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "constants.h"

class UserInterface {
    
    public:
        UserInterface();
        ~UserInterface();

        void errmsg(std::string type, std::string msg);
};
