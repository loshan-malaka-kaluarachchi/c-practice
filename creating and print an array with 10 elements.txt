#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{
                            /** declaration **/
    int count = 0;
    int i = 0;
    int array[10];

                            /** creates an array **/
    while(count<10)
    {
                            /** count starts at zero -> count value is stored in array **/
        array[count] = count+1;
        count = count+1;
    }

                            /** prints out array **/

                            /** prints first bracket **/
    printf("array = [");
                            /** prints terms in the middle **/
    while (i<9)
    {
        printf("%d,",array[i]);
        i=i+1;
    }
                            /** update i and prints last term and closes the bracket **/
    i=i+1;
    printf("%d]",array[i]);


  return 0;
}
