#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int COUNT;
int END;

void FUNCT_1(){
    if(COUNT < END){
        printf("Count -> %d\n",COUNT);
        COUNT = ++COUNT;
        FUNCT_1();
    }
}

void _RECURSION_FUNCT(){
    COUNT  = 0;
    END = 5;
    FUNCT_1();
}

int main()
{
    _RECURSION_FUNCT();
    return 0;
}
