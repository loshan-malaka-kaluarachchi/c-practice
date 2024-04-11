#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Begin User defined functions **/

    int horiz_space(int x)          /** prints whitespaces **/
    {
        int i=0;
        do
        {
            printf(" ",++i);
        }
        while(i<x);
        return 0;
    }

    int vert_space(int y)           /** prints nextlines **/
    {
        int j=0;
        do
        {
            printf("\n",++j);
        }
        while(j<y);
        return 0;
    }

    int  zeros(int z)               /** prints out zeros **/
    {
        int _zcount=0;
        do{
             printf("0");
             ++_zcount;
          }
        while(_zcount<z);
        return 0;
    }

    int pattern_1(int z,int h,int no_count2,int no_count1)  /** no_count2 - no of zeroed columns **/
    {                                                       /** height of pattern **/
        int count1,count2;                                  /** example code-> pattern_1(5,5,10,100); **/
        count1 = 0;
        count2 = 0;

        while(count1<no_count1)
        {
            while(count2<no_count2)
            {
                zeros(z);
                horiz_space(h);
                ++count2;
            }
            count2=0;
            vert_space(1);
            ++count1;
        }
        return 0;
    }

int pattern_2(int steps)
    {


        horiz_space(steps-1);
        zeros(1);
        horiz_space(steps-1);
        vert_space(1);

        horiz_space(steps-2);
        zeros(3);
        horiz_space(steps-2);
        vert_space(1);

        horiz_space(steps-3);
        zeros(5);
        horiz_space(steps-3);
        vert_space(1);

        horiz_space(steps-4);
        zeros(7);
        horiz_space(steps-4);
        vert_space(1);


    }

pattern_pyramid(int width)      /** Prints out pyramid of zeros **/
    {
        int k,count=0;
        do
        {
            k = 2*count+1;
            horiz_space(width-count);
            zeros(k);
            horiz_space(width-count);
            vert_space(1);
            ++count;
        }
        while(count<width);

    }
/** End of user defined functions **/

int main()
{
    
    return 0;
}
