/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:29:38 by arurangi          #+#    #+#             */
/*   Updated: 2023/05/31 14:25:10 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * NAMESPACE
 * ******
 * un namespace est un mécanisme qui permet d'organiser les éléments de code,
 * tels que les classes, les fonctions et les variables, en groupes distincts
 * et évite les conflits de noms. Un namespace crée un espace de noms logique
 * dans lequel les identificateurs uniques peuvent être utilisés sans risque
 * de collisions avec des identificateurs d'autres espaces de noms.
 *
*/

int	gl_var = 20;
int	f(void) { return 21; }

// creer un namespace
namespace Primary {
    int	gl_var = 10;
	int f(void) { return 12; }
}

// On peu copier un namespace
namespace	Secondary = Primary;

#include <stdio.h>
int main(void)
{
    printf("gl_var:		        [%d]\n", gl_var);
    printf("f():		        [%d]\n\n", f());
	
    // `Name::content` permet d'acceder au contenu d'un name space
    printf("Primary::gl_var:	[%d]\n", Primary::gl_var);
    printf("Primary::f():		[%d]\n\n", Primary::f());
		
    printf("Secondary::gl_var:	[%d]\n", Secondary::gl_var);
    printf("Secondary::f():		[%d]\n\n", Secondary::f());
	
    // :: sans prefix revient a acceder au namespace global/scope global
    printf("gl_var:		        [%d]\n", ::gl_var);
    printf("f():		        [%d]\n\n", ::f());
}