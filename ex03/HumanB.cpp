#include "HumanB.hpp"

void    HumanB::attack( void )
{
    if (this->weapon != NULL && this->weapon->getType() != "")
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack!" << std::endl;
}

HumanB::HumanB(std::string name )
{
    this->weapon = NULL;
    this->setName(name);
};

HumanB::~HumanB ( void ) {};

void    HumanB::setName(std::string name)
{
    this->name = name;
}

std::string HumanB::getName( void )
{
    return (this->name);
}

Weapon*  HumanB::getWeapon( void )
{
    return (this->weapon);
}

void    HumanB::setWeapon(Weapon& wep)
{
    this->weapon = &wep;
}