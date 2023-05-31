/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:41:16 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 15:24:44 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:
	
		int		foo;
		
		Sample(void); // constructor
		~Sample(void); // destructor
		
		void	bar(void);

};

class Sample2 {

	public:
		char	a1;
		int		a2;
		float	a3;
		
		Sample2(char p1, int p2, float p3);
		~Sample2(void);

};

#endif