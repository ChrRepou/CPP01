#ifndef HUMAN_B_H_
#define HUMAN_B_H_

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;

    public:
        void    attack( void );
        HumanB(std::string name);
        ~HumanB();
        void    setName(std::string name);
        std::string getName( void );
        void    setWeapon(Weapon& wep);
        Weapon*  getWeapon( void );
};

#endif