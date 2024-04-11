#include <stdio.h>
#include <stdlib.h>

/*  Structure syntax
-----------------------

    struct [structure tag]{

        member 1;
        member 2;
        member 3;
        ...
    }
*/
add(int a, int b){

int c = a+b;
return c;

}



int main()
{
   int result;

   result = add(2,3);
   printf("%d",result);
    return 0;
}
