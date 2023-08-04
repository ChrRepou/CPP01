#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie( std::string ZombieName ){
      this->name = ZombieName;
};

Zombie::~Zombie( void ){
       std::cout << this->name << std::endl;
};