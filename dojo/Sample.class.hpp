/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:41:16 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 19:31:46 by lupin            ###   ########.fr       */
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

class Sample3 {

	public:
		float const	pi;
		int			nbr;
		
		Sample3(float const f);
		~Sample3(void);

		void	bar(void) const;

};

#endif