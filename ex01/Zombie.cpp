#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setZombieName(std::string ZombieName)
{
    this->name = ZombieName;
}

Zombie::~Zombie( void ){
    std::cout << this->name << std::endl;
};

Zombie::Zombie( void ){};