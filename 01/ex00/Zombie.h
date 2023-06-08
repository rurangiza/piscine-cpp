//
// Created by Arsène Rurangiza on 07/06/2023.
//

#ifndef ZOMBIE_H_
#define ZOMBIE_H_

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie();

        void announce(void);

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
