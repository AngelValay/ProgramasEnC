#include <stdlib.h>
#include <stdio.h>

int main(){
    int edad;
    printf("Teclea la edad: ");
    scanf("%d",&edad);
    printf("La edad es: %d",edad);
    if(edad >= 18){
        printf("\nPuedes obtener la credencial de elector.");
    }else{
        printf("\nNo tienes derecho a la credencial de elector.");
    }
}
