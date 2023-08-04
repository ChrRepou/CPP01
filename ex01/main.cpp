#include "Zombie.hpp"

int     main( void )
{
    Zombie  *zombieStack;
    int     i;

    zombieStack = zombieHorde(10, "christina");

    if (!zombieStack)
    {
        std::cout << "Problem during the memory allocation..\n";
        return 1;
    }

    i = 0;

    while (i < 10) {
        Zombie* currentZombie = zombieStack + i;
        std::cout << "index-" << i << ": ";
        currentZombie->announce();
        i++;
    }

    i = 0;
    delete[] zombieStack;

    return 0;
}