#include "Zombie.hpp"

int     main( void )
{
    Zombie *myZombie;

    myZombie = newZombie("Christina");
    myZombie->announce();
    delete myZombie;
    return 0;
}