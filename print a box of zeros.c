#include <stdio.h>
#include <stdlib.h>

/** printing (row by column) box of zeros **/
int main()
{
int row,col;

printf("Enter no of rows~> ");
scanf("%d",&row);
printf("Enter no of columns~> ");
scanf("%d",&col);

    int i=0;

   while(i<row)
   {

        int j=0;
        while(j<col)
        {
            printf("0");
            j=j+1;
        }
        printf("\n");
        i=i+1;

   }
    return 0;
}
