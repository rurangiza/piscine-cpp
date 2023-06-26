/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:07 by arurangi          #+#    #+#             */
/*   Updated: 2023/06/23 14:42:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {

    private:
        int                 _fixedPoint;
        static const int    _fractionalBits;
    
    public:
        Fixed();
        
        ~Fixed();
};