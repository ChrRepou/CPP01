#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
              << "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
};

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
              << "years whereas you started working here since last month." << std::endl;
};
        
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain( std::string level )
{
    void (Harl::*functionArray[4])();

    functionArray[0] = &Harl::debug;
    functionArray[1] = &Harl::info;
    functionArray[2] = &Harl::warning;
    functionArray[3] = &Harl::error;

    std::string levelsArray[4];
    levelsArray[0] = "debug";
    levelsArray[1] = "info";
    levelsArray[2] = "warning";
    levelsArray[3] = "error";

    int i;
    for (i = 0; i < 4; i++)
    {
        if (levelsArray[i] == level)
            break;
    }

    if (i > 3)
    {
        std::cout << "level: \"" << level << "\" doesn't exist" << std::endl;
        return;
    }
    (this->*functionArray[i])();
};