#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
   int count,remainder,even,nextval;    /** Variable declaration**/
   int num=100;

   nextval = num;                       /** assign value for the variable "nextval" used inside the loop **/

    while(nextval!=0)                   /** loop runs until "nextval" is zero **/
    {
        remainder = nextval%2;
        printf("count:%d - %d\n",count,remainder);  /** prints count number and remainder binary value **/
        even = nextval - remainder;                 /** even number is made **/
        nextval = even/2;                           /** the next value is calculated hence the variable name "nextval" **/
        count = count + 1;                          /** counter **/
    }

  return 0;
}
