#include "Zombie.hpp"

int     main( void )
{
    Zombie *myZombie;

    //allocate in heap to use in parent
    myZombie = newZombie("Christina");
    myZombie->announce();
    delete myZombie;

    //allocate in stack
    randomChump("Barbie");

    return 0;
}