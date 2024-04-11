#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MOV_R(int RIGHT){
    int K = 0;
    while(K < RIGHT){
        printf(" ");
        K = ++K;
    }
    return K;// RETURNS CURSOR nTH COLUMN
}

int MOV_D(int DOWN){
    int K = 0;
    while(K < DOWN){
        printf("\n");
        K = ++K;
    }
    return K;// RETURNS CURSOR nTH ROW
}

int PRINT_COORD(int ROW,int COL,char SYMBL){
    MOV_D(ROW - 1);
    MOV_R(COL - 1);
    printf("%c",SYMBL);
}

void H_LINE(int ROW,int NUM){
    int K = 0;
    MOV_D(ROW - 1);
    while(K < NUM){
        printf("-");
        K = ++K;
    }
}

int main(){
    
    return 0;

}
