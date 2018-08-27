#include <iostream>
#include <stdio.h>
int isOpenFile(FILE *pFile);
int main() {
    char matriz[50][10] = {};

    FILE *fichero;

    //Abrimos el archivo
    fichero = fopen("C:\\Users\\angel\\Desktop\\nombres.txt","w");
    if(isOpenFile(fichero)){
        printf("Pude abrir el archivo\n");
        for (int i = 0; i < 50; ++i) {
            fgets(matriz[i],25,fichero);
        }
        for (int j = 0; j < 50; ++j) {
            printf("%s",matriz[j]);
        }
        fclose(fichero);
    }else{
        printf("No se pudo abrir el archivo\n");
    }
    return 0;
}
int isOpenFile(FILE *pFile){
    return pFile!=NULL;
}