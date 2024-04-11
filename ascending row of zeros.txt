#include <stdio.h>
#include <stdlib.h>

/* Ascending Rows*/
int main()
{
    int row;
    int col=0;

    printf("Enter no of rows:");
    scanf("%d",&row);


    while(col<row)
    {
        int count=0;
        while(count<=col)
        {
         printf("0");
         count=count+1;
        }
        printf("\n");
        col=col+1;
    }



    return 0;
}
