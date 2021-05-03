
#include "head.h"
char grade(int avg)
{
    if(avg>=0 && avg<25)
    {
        return 'C';
    }
    if(avg>=25 && avg<50)
    {
        return 'B';
    }
    if(avg>=50 && avg<75)
    {
        return 'A';
    }
    if(avg>=75 && avg<=100)
    {
        return 'O';
    }
}