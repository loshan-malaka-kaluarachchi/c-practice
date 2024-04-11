#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FUNC();
int GET_INT();
int VEC_A[5];

int main(){
    FUNC();
    return 0;
}

int FUNC(){
    int ITER;
    for(ITER = 0;ITER <= 5;++ITER){
        printf("ENTER VALUE: ");
        VEC_A[ITER] = GET_INT();
    }

}

int GET_INT(){
    int VAR;
    scanf("%d",&VAR);
    return VAR;
}
