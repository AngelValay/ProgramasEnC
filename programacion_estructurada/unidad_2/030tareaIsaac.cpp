#include <iostream>

int main() {
    srand(0);
    //solo funciona para matriz cuadrada
    int filas=10,columnas=10;
    int matriz[filas][columnas]={0};
    int i,j;
    int random;
    int cnt_arreglo=0;
    int cnt_columnas=0;
    int arreglo[filas*2]={0};
    int diagonal1=0;
    int columnasDiagonal=filas;
    int diagonal2=0;
    int sumaEsquinas=0;
    int sumaMatriz=0;
    int sumaPerimetro=0;
    printf("\n");

//llena e imprime la matriz
    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            random=rand()%100+1;
            matriz[i][j]=random;
            printf("%5d",matriz[i][j]);
        }printf("\n");
    }
//cuenta filas
//cuenta diagonales
    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas ; ++j) {
            //hace la suma de las filas
            if (i==cnt_arreglo)
                arreglo[cnt_arreglo]+=matriz[i][j];
            //hace la suma de la primer diagonal
            if (i==j)
                diagonal1+=matriz[i][j];
            //hace la suma de la segunda diagonal
            if (columnasDiagonal==j){
                diagonal2+=matriz[i][j];
                columnasDiagonal--;
            }
            //suma esquinas
            if ((i==0 && (j==0||j==columnas-1)) || (filas-1==i && (j==0 || j==columnas-1)))
                sumaEsquinas+=matriz[i][j];
            //suma completa de la matriz
            sumaMatriz+=matriz[i][j];
            //suma del perimetro
           if (i==0 || i==filas-1 || ((i>0 || i<filas-1) && (j==0 || j==filas-1)))
               sumaPerimetro+=matriz[i][j];
        }
        //este contador es para la suma de las filas
        cnt_arreglo++;
    }
//suma de columnas
    for (i = 0; i < columnas; ++i) {
        for (j = 0; j < filas; ++j) {
            if (i==cnt_columnas)
                arreglo[cnt_arreglo]+=matriz[j][i];
        }
        cnt_columnas++;
        cnt_arreglo++;
    }
//imprime resultado de filas y columnas
    j=0;
    for (i = 0; i < filas*2; ++i) {
        //imprime las filas
        if (i<filas*2/2)
            printf("\nFila %d: %d",i,arreglo[i]);
        //imprime las columnas
        else
            printf("\nColumna %d: %d",j++,arreglo[i]);
    }
    printf("\nDiagonal 1: %d",diagonal1);
    printf("\nDiagonal 2: %d",diagonal2);
    printf("\n4 Esquinas: %d",sumaEsquinas);
    printf("\nSin las 4 esquinas: %d",sumaMatriz-sumaEsquinas);
    printf("\nPerimetro: %d\n",sumaPerimetro);
    return 0;
}
