#include <stdlib.h>
#include <stdio.h>
#define N 4
int main(){
    char nombres[N][50]={'\0'};
    char nombresCod[N][50]={'\0'};
    for(int x=0;x<N;x++){
        char nombre[50]={'\0'};
        printf("Nombre %d: ",x);
        gets(nombre);
        for(int y=0;nombre[y];y++){
            nombres[x][y]=nombre[y];
        }
        system("cls");
    }

    printf("-----------NOMBRES CODIFICADOS-------------\n");
    for(int m = 0;m<N;m++){
        for(int n=0;nombres[m][n];n++){
            if(n%2==0){
                printf("%c",(nombres[m][n]+n-2*n*n));
            }else{
                printf("%c",((n+2*nombres[m][n]*nombres[m][n])-n*n)/n);
            }
        }
        printf("\n");
    }
    printf("-----------NOMBRES DECODIFICADOS-------------\n");
    for(int m = 0;m<N;m++){
        for(int n=0;nombresCod[m][n];n++){
            if(n%2==0){
                if((nombresCod[m][n]+10)%3==0)
                    printf("%c ",nombresCod[m][n]+10);
                    nombresCod[m][n] = nombresCod[m][n]+10;
                if((nombresCod[m][n]-10)%2==0)
                    printf("%c ",nombresCod[m][n]-10);
                    nombresCod[m][n] = nombresCod[m][n]-10;
                if((nombresCod[m][n]-5)%5==0)
                    printf("%c ",nombresCod[m][n]-5);
                    nombresCod[m][n] = nombresCod[m][n]-5;
            }else{
                if(n%2!=0){
                    if((nombresCod[m][n]-16)>=0 && (nombresCod[m][n]-16)<16){
                        printf("%c ",nombresCod[m][n]-16);
                        nombresCod[m][n] = nombresCod[m][n]-16;
                    }
                    if((nombres[m][n]+16)>=16 && (nombres[m][n]+16)<32){
                        printf("%c ",nombresCod[m][n]+16);
                        nombresCod[m][n] = nombresCod[m][n]+16;
                    }
                    if((nombresCod[m][n]+32)>=32 && (nombresCod[m][n]+32)<48){
                        printf("%c",nombresCod[m][n]+32);
                        nombresCod[m][n] = nombresCod[m][n]+32;
                    }
                    if((nombresCod[m][n]-32)>=48 && (nombresCod[m][n]-32)<64){
                        printf("%c ",nombresCod[m][n]-32);
                        nombresCod[m][n] = nombresCod[m][n]-32;
                    }
                    if((nombresCod[m][n]+16)>=64 && (nombresCod[m][n]+16)<80){
                        printf("%c ",nombresCod[m][n]+16);
                        nombresCod[m][n] = nombresCod[m][n]+16;
                    }
                    if((nombresCod[m][n]-32)>=80 && (nombresCod[m][n]-32)<96){
                        printf("%c ",nombresCod[m][n]-32);
                        nombresCod[m][n] = nombresCod[m][n]-32;
                    }
                    if((nombresCod[m][n]-16)>=96 && (nombresCod[m][n]-16)<112){
                        printf("%c ",nombresCod[m][n]-16);
                        nombresCod[m][n] = nombresCod[m][n]-16;
                    }
                    if((nombresCod[m][n]+16)>=112 && (nombresCod[m][n]+16)<128){
                        printf("%c ",nombresCod[m][n]+16);
                        nombresCod[m][n] = nombresCod[m][n]+16;
                    }
                }
            }
        }
        printf("\n");
    }


}
