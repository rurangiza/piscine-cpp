//
// Created by Arsène Rurangiza on 07/06/2023.
//

#include "Zombie.h"

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Zombie::Zombie(std::string name) {
    this->name = name;
    ;
};

Zombie::~Zombie() {
    ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void Zombie::announce(void) {
    std::cout << this->name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
