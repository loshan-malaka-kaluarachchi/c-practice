#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int count,remainder,even,nextval;    /** Variable declaration**/
   int num=2;

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


Rough Work
______________________________________________________________________________________________________________________________


243					num = 243 
					val_a = num

243%2=1		count = 0		remainder = val_a%2 
243-1=242				even = val_a - remainder 
242/2=121				val_a = even/2   
					count = count + 1

					
121%2=1		count = 1		remainder = val_a%2
121-1=120				even = val_a - remainder
120/2=60				val_a = even/2
					count = count + 1

60%2=0		count = 2
60-0=60
60/2=30

30%2=0		count = 3
30-0=30
30/2=15

15%2=1		count = 4
15-1=14
14/2=7

7%2=1		count = 5
7-1=6
6/2=3

3%2=1		count = 6
3-1=2
2/2=1  

1%2=1		count = 7
1-1=0
0/2=0

