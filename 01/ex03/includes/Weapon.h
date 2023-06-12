/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:22:57 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/12 18:09:44 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
  
  private:
    std::string m_type;

  public:
    Weapon(std::string type);
    ~Weapon();

    const std::string &getType();
    void  setType(std::string type);
};

#endif