#include <stdlib.h>
#include <stdio.h>

int main(){
    char nombres[50][5] = {' '};
    char nombre[50];
    int x = 0,y = 0;
    for(;;){
        printf("Dame un nombre:");
        gets(nombre);
        for(int a = 0;nombre[a];a++){
            nombres[a][y] = nombre[a];
        }
        y++;
        if(y>=5){
            break;
        }
    }
    x = 0;
    y = 0;
    for(;;){
        printf("%c",nombres[x][y]);
        x++;
        if(x>=50){
            x = 0;
            y++;
            printf("\n");
        }

        if(y>=5){
            break;
        }
    }
}
