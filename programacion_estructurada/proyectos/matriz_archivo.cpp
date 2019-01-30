#include <iostream>
#include<time.h>
#include<stdlib.h>
#define N 4


void funcion1(int [][N],int);
void funcion2(int [][N],int);
void funcion3(int [][N],int [][N],int [][N],int);



int main() {
    srand(time(NULL));
    int matrizPar[N][N];
    int matrizImpar[N][N];
    int matrizSuma[N][N];
    funcion1(matrizPar,N);
    funcion2(matrizImpar,N);
    funcion3(matrizPar,matrizImpar,matrizSuma,N);


}



void funcion1 (int matriz[][N], int filas){
    int i=0;
    int limInf=0;
    int limSup=0;
    //Pedir los numeros de la longiud
    printf("\nNumero minimo: ");
    scanf("%d",&limInf);
    do{
        printf("\nNumero mayor: ");
        scanf("%d",&limSup);
    }while(limInf>=limSup);

    for (i=0; i<filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            do {
                matriz[i][j] = limInf + rand() % (limSup + 1 - limInf);
            }while(matriz[i][j]%2==0);
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}
void funcion2 (int matriz[][N], int filas){
    int i=0;
    int limInf=0;
    int limSup=0;
    //Pedir los numeros de la longiud
    printf("\nNumero minimo: ");
    scanf("%d",&limInf);
    do{
        printf("\nNumero mayor: ");
        scanf("%d",&limSup);
    }while(limInf>=limSup);

    for (i=0; i<filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            do {
                matriz[i][j] = limInf + rand() % (limSup + 1 - limInf);
            }while(matriz[i][j]%2==0);
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}




void funcion3 (int matrizPar[][N],int matrizImpar[][N],int matrizSuma[][N], int filas){

    int i=0;
    for (i=0; i<filas; ++i) {
        for (int j = 0; j < filas; ++j) {
                matrizSuma[i][j] = matrizPar[i][j] +matrizImpar[i][j];
        }
    }
    printf("\nSuma:\n");
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            printf("%d\t",matrizSuma[j][i]);
        }
        printf("\n");
    }

    int q=0;
    printf("\n\nDeseas guardarlo en un archivo? SI-1 NO -0");
    scanf("%d",&q);
    if(q!=0){
        getchar();
        char  nombre[50]="";
        printf("\nDame un nombre de texto: ");
        scanf("%[^\n]",nombre);
        FILE *file2= fopen(nombre,"w");
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < filas; ++j) {
                fprintf(file2,"%d\t",matrizSuma[j][i]);
            }
            fprintf(file2,"\n");
        }
        fclose(file2);
    }
}