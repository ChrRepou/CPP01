#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <sstream>
#include <limits>

class   Zombie {
    private:
        std::string name;
    
    public:
        void announce( void );

    Zombie( std::string ZombieName );
    ~Zombie( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif