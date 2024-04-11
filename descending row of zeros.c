#include <stdio.h>
#include <stdlib.h>

/* Descending Rows*/
int main()
{
    int row;
    int count=0;

    printf("Enter no of rows: ");
    scanf("%d",&row);

    while(count<row)
    {
            int current_row=0;
            while(current_row<row)
            {
            printf("0");
            current_row=current_row+1;
            }
            printf("\n");
            row=row-1;
    }



    return 0;
}
