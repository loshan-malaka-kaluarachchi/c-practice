#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int _newbin(int input)
{

    int bin[32];
    int number;
    int count=31;
/** store binary values in 'bin' array**/
        do
        {
            number = input%2;

            switch(number)
            {
                case 0:
                        bin[count] = 0;
                        input = input/2;
                        break;
                case 1:
                        bin[count] = 1;
                        input = (input - 1)/2;
                        break;
            }
            count--;
        }
        while(count>=0);
        count++;

/** print 'bin' array **/
        while(count<32)
        {
            printf("%d",bin[count++]);
        }

}

/** prints out list of binary numbers **/
get_all_bin(int no_of_values)
{
  int i=0;
    while(i<no_of_values)
    {
        _newbin(i);
        printf("->%d\n ",i);
        ++i;
    }

}

int main()
{
    

    return 0;
}
