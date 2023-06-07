//
// Created by Arsène Rurangiza on 07/06/2023.
//

#include "Zombie.h"

int
main(void) {

    Zombie foo("Foo");
    Zombie glop("Glop");

    glop.announce();
    foo.announce();

    return 0;
}
