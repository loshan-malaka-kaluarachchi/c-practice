#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float REAL;
    float IMAG;
}CMPLX_NUM;

float CMPLX_MAG(float X,float Y){
    CMPLX_NUM W_1;
    W_1.REAL = X;
    W_1.IMAG = Y;
    float MAGNITUDE = sqrt(pow(X,2) + pow(Y,2));
    return MAGNITUDE;
}//COMPUTES AND RETURNS MAGNITUDE OF CMPLX_NUM VARIABLE

float CMPLX_PHI(float X,float Y){
    CMPLX_NUM W_1;
    W_1.REAL = X;
    W_1.IMAG = Y;
    float PHASE = atan(Y/X)*(180/3.1415);
    return PHASE;
}//COMPUTES AND RETURNS PHASE OF CMPLX_NUM VARIABLE

void CALCULATION(){
    float X,Y;
    X = 3;
    Y = 4;
    printf("COMPLX NUM - %.3f + %.3fj\n",X,Y);
    printf("MAGNITUDE  - %.2f\nPHASE      - %.2f\n",CMPLX_MAG(X,Y),CMPLX_PHI(X,Y));
}

int main()
{
    CALCULATION();
    return 0;

}
