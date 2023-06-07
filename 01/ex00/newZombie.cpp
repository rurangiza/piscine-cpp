//
// Created by Arsène Rurangiza on 07/06/2023.
//

#include "Zombie.h"

/* Crée un zombie, lui donne un nom et le retourne afin qu’il puisse
 * être utilisé en dehors de la portée de la fonction.
*/

Zombie* newZombie( std::string name ) {
    Zombie zombie(name);
    return zombie;
}