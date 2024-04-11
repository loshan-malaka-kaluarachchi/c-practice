#include<stdio.h>

int GET_BIT(int NUM){
    int BIT = NUM%2;
    return BIT;
}

int NXT_NUM(int NUM){
    int NXT_NUM = (NUM - GET_BIT(NUM))/2;
    return NXT_NUM;
}

int NO_OF_BITS(int NUM){
    int COUNT = 0;

    if(NUM != 0){
        while(NUM >= pow(2,COUNT)){
            COUNT = ++COUNT;
        }
    return COUNT;
    }else
    if(NUM == 0){
        return COUNT = 1;
    }
}


int DEC_TO_BIN(int NUM){

    int LENGTH = NO_OF_BITS(NUM);
    int BIN[LENGTH];
    int COUNT = LENGTH-1;

   // printf("NO OF BITS - %d\n",LENGTH);
    do{
        BIN[COUNT--] = GET_BIT(NUM);
        NUM = NXT_NUM(NUM);
    }while(NUM != 0);

    COUNT = 0;
    while(COUNT < LENGTH){
        printf("%d",BIN[COUNT]);
        COUNT = ++COUNT;
    }
    printf("\n");

}

int main()
{
    
    return 0;
}
