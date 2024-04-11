#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Fibonacci sequence **/
int main()
{
    int a,b,c,counter,i;

    counter = 50;
    i = 0;
    a = 0;
    b = 1;

    do
    {
        c = a + b;
        printf("\n%d",c);
        a = b;
        b = c;
        ++i;
    }
    while(i<counter-1);

    return 0;
}
