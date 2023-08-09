#include "Harl.hpp"

int     main ( void )
{
    Harl myHarlObj;

    myHarlObj.complain("error");
    myHarlObj.complain("oops");
    myHarlObj.complain("debug");
    myHarlObj.complain("warning");
    myHarlObj.complain("info");
    return 0;
}