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
    
    Zombie( void );
    void    setZombieName(std::string ZombieName);
    ~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif