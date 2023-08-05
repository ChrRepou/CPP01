#ifndef HUMAN_A_H_
#define HUMAN_A_H_

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;
    
    public:
        void    attack( void );
        HumanA( std::string name, Weapon& wep );
        ~HumanA();
        void    setName(std::string name);
        std::string getName( void );
        void    setWeapon(Weapon wep);
        Weapon  getWeapon( void );
};

#endif