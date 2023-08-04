#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <sstream>
#include <limits>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class   Zombie {
    private:
        std::string name;
    
    public:
        void announce( void );
    
    Zombie(){};

    void    setZombieName(std::string ZombieName)
    {
        this->name = ZombieName;
    }

    ~Zombie( void ){
        std::cout << this->name << std::endl;
    };
};

Zombie* zombieHorde( int N, std::string name );

#endif