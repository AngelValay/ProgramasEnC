#include <cstdio>
#include <time.h>
#include <cstdlib>

#define N 5
#define LIM_RAN 150
int main() {
    srand(time(0));
    int filas=0,columnas=0;
    int auxFilas = 0, auxCol = 0;
    int numerosRandom[N][N]={0};
    int seRepite = 1;
    int auxRep = 0;
    for(;;){
        if(seRepite){
            printf("\t(%d,%d)\n",auxFilas,auxCol);
            auxCol++;
            if(auxCol>=columnas){
                auxCol = 0;
                auxFilas++;
            }
            if(auxFilas>filas && auxFilas>0){
                seRepite = 0;
            }

        }else{
            numerosRandom[filas][columnas] = 1  + rand()%(LIM_RAN-1);
            printf("(%d,%d)\n",filas,columnas);
            auxCol = 0;
            auxFilas = 0;
            columnas++;
            seRepite = 1;
            if(columnas>=N){
                columnas = 0;
                filas++;
            }
            if(filas>=N){
                break;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%5d",numerosRandom[i][j]);
        }
        printf("\n");
    }
    return 0;
}