#include "HumanA.hpp"

void    HumanA::attack( void )
{
    std::cout << name << " attacks with their " << this->getWeapon().getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon& wep ) : weapon(wep)
{
    this->setWeapon(wep);
    this->setName(name);
}

HumanA::~HumanA( void ){};

void    HumanA::setName(std::string name)
{
    this->name = name;
}

std::string HumanA::getName( void )
{
    return (this->name);
}

Weapon  HumanA::getWeapon( void )
{
    return (this->weapon);
}

void    HumanA::setWeapon(Weapon wep)
{
    this->weapon = wep;
}