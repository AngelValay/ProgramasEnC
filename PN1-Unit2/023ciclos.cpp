#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int edad;
    int ban;
    do{
        ban = 0;
        printf("Introduce tu edad: ");
        scanf("%d",&edad);
        if(edad<0 || edad>=100){
            ban = 1;
            printf("estoy jugando :b dame otro valor.");
            //getchar();
            Sleep(1000);
            system("cls");
        }

    }while(ban);
    printf("Edad: %d",edad);

}










/*
printf("scanf = %d\n", scan);
        getchar();*/
