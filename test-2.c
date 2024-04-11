#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    int count,list_1[]={54,14,11,21,20,6};

    printf("count at this stage = %d\n",count);
    printf("[");

    while(count<5)
        {
            printf("%d,",list_1[count]);
            count=count+1;
        }
    printf("%d]",list_1[count]);
    printf("\ncount at this stage = %d\n",count);
    printf("size of array'list_1' = %d\n\n\n",sizeof(list_1));


}

int main()
{

}
