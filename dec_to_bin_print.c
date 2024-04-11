#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int dec_to_bin(int num)               /** "num" is the input of the function "dec_to_bin" **/
{
    int count,remainder,even,nextval; /** Declaration**/

    int digit[32];

    count = 0;                        /** "Count" set to zero **/
    nextval = num;                    /** value of "num" is passed to "nextval" **/

    do                                /** loop runs and checks if "nextval" is not zero **/
    {
        remainder = nextval%2;        /** "remainder" is either 1 or 0 **/
        digit[count] = remainder;     /** "remainder" is stored in array "digit[32]" **/
        even = nextval - remainder;   /** even number is calculated and stored in "even"**/
        nextval = even/2;             /** "even" is divided by 2 and the result is stored in "nextval" **/
        count = count + 1;            /** count is incremented by 1 **/
    }
    while(nextval!=0);

    printf("\n%d -> ",num);           /** prints nextline twice and then prints out "num" **/

    while (count!=0)                  /** loop prints back generated binary digits **/
    {
        count = count - 1;
        printf("%d",digit[count]);

    }

}

int main()
{
    int no_of_iterations;
    int i = 0;

    printf("Enter Number of Iterations:");
    scanf("%d",&no_of_iterations);

    while (i<=no_of_iterations)
    {                                      /**prints binary values in the range [0,"no_of_iterations"]**/
        dec_to_bin(i);                     /**implementation of the dec_to_bin function**/
        i=i+1;
    }


    return 0;
}
