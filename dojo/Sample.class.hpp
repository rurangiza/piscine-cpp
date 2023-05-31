/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:41:16 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 14:59:23 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	
	public:
	
		int	foo;
		
		Sample(void); // constructor
		~Sample(void); // destructor
		
		void	bar(void);
};

#endif