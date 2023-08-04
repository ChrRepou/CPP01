#include <sstream>
#include <iostream>

int     main( void )
{
    std::string brainStr = "HI THIS IS BRAIN";
    std::string *stringPTR = &brainStr;
    std::string &stringREF = brainStr;

    //print memory address of brainStr
    std::cout << &brainStr << std::endl;

    //print memory address of stringPTR
    std::cout << stringPTR << std::endl;

    //print memory address of stringREF
    std::cout << &stringREF << std::endl;

    //print value of brainStr
    std::cout << brainStr << std::endl;

    //print value of stringPTR
    std::cout << *stringPTR << std::endl;

    //print value of stringREF
    std::cout << stringREF << std::endl;
}