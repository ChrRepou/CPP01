#ifndef WEAPON_H_
#define WEAPON_H_

#include <sstream>

class Weapon {
    private:
        std::string type;

    public:
        const std::string& getType( void ) const;
        void  setType(std::string myType);
};

#endif