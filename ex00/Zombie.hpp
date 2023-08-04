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

    Zombie( std::string ZombieName ){
        this->name = ZombieName;
    };

    ~Zombie( void ){
        std::cout << this->name << std::endl;
    };
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif