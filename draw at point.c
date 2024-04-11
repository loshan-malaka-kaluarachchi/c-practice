#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ROW,COLUMN;

void NEXTLINE(){
    printf("\n");
}

void CURRENT_POSITION(){
    printf("CURRENT ROW -- %d",ROW);
    NEXTLINE();
    printf("CURRENT COLUMN -- %d",COLUMN);
}

int MOV_R(int RIGHT){
    COLUMN = 0;
    while(COLUMN < RIGHT && COLUMN >=0){
        printf(" ");
        COLUMN = ++COLUMN;
    }
   // RETURNS CURRENT COLUMN
}

int MOV_D(int DOWN){
    ROW = 0;
    while(ROW < DOWN && ROW >= 0){
        printf("\n");
        ROW = ++ROW;
    }
   // RETURNS CURRENT ROW
}

int DRAW_AT_POINT(int _ROW,int _COLUMN){
    MOV_D(_ROW);
    MOV_R(_COLUMN);
    printf("X");
    COLUMN = ++COLUMN;
}


int main(){

    
    return 0;
}
