#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Construye un diagrama de flujo y el correspondiente programa en C que,
         al recibir como datos de entrada tres valores enteros diferentes entre
          sí, determine si los mismos están en orden creciente.
    */
    int val1,val2,val3;
    printf("Ingrese el primer valor: ");
    scanf("%d",&val1);
    printf("%d",val1);
    printf("\nIngrese el segundo valor: ");
    scanf("%d",&val2);
    printf("%d",val2);
    printf("\nIngrese el tercer valor: ");
    scanf("%d",&val3);
    printf("%d",val3);
    if(val1<val2){
        if(val2<val3) printf("Orden creciente");
        else printf("No esta en orden");
    }else{
        printf("No esta en orden");
    }

}
