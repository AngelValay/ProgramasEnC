#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombres[10][50]={' '};
    char nombre[50]={' '};

    for(int x=0;x<10;x++){
        printf("Dame un nombre: ");
        gets(nombre);
        for(int y=0;nombre[y];y++){
            nombres[x][y]=nombre[y];
        }
    }
    for(int x = 0;x<10;x++){
        for( int y = 0;y<50;y++){
            printf("%c",nombres[x][y]);
        }
        printf("\n");
    }
    char nombreB[50];
    do{
        printf("Dame un nombre a buscar:");
        gets(nombreB);
        int seEncontro = 0;
        for(int x =0;x<10;x++){
            for(int y = 0;nombres[x][y];y++){
                if(nombreB[y]==nombres[x][y]){
                    seEncontro = 1;
                }else{
                    seEncontro = 0;
                    break;
                }
            }
            if(seEncontro){
                break;
                printf("\nSe encontro\n");
            }
            seEncontro = 0;
        }
        if(seEncontro){
                printf("\nSe encontro\n");
        }
    }while(true);
}
