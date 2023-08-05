#include "Weapon.hpp"

const std::string& Weapon::getType( void )
{
    const std::string& type = this->type;

    return (type);
}

void  Weapon::setType(std::string myType)
{
    this->type = myType;
}

Weapon::Weapon(std::string weapon)
{
    setType(weapon);
}

Weapon::~Weapon(){};

Weapon::Weapon(){};