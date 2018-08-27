#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia;

    printf("Ingresa el dia de la semana");
    scanf("%d",&dia);
    switch(dia){
    case 1:
        printf("Es lunes");
        break;
    case 2:
        printf("Es martes");
        break;
    case 3:
        printf("Es miercoles");
        break;
    case 4:
        printf("Es jueves");
        break;
    case 5:
        printf("Es viernes");
        break;
    case 6:
        printf("Es sabado");
        break;
    case 7:
        printf("Es domindo");
        break;
    default:

    }
}
