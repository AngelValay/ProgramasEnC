#include <stdlib.h>
#include <stdio.h>
#define FILAS 4
#define COLUMNAS 5

int main(){
    int matriz[FILAS][COLUMNAS] = {10,11,12,13,14,
                                    15,16,17,18,19,
                                    20,21,22,23,24,
                                    25,26,27,28,29};
    int x=0,y=0;
    do{
        printf("%d,%d = %d\n",x,y,matriz[y][x]);
        x++;

        if(x>=COLUMNAS){
            y++;
            x = 0;
        }

        if(y>=FILAS)
            break;
    }while(1);
    return 0;
}
