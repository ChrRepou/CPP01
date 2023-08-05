#ifndef WEAPON_H_
#define WEAPON_H_

#include <sstream>
#include <iostream>

class Weapon {
    private:
        std::string type;

    public:
        const std::string& getType( void );
        void  setType(std::string myType);
        Weapon();
        Weapon(std::string weapon);
        ~Weapon();
};

#endif