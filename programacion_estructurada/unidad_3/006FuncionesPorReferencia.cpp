#include <iostream>
#include <string.h>
void prueba (int *p);

int main() {

    printf("Inicia main");
    int v1 = 30;
    printf("\nV1 vale: %d\t%p",v1,&v1);
    prueba(&v1);
    printf("\nV1 vale: %d\t%p",v1,&v1);
    printf("\nTermina main");
    return 0;
}
void prueba (int *puntero){
    printf("\n\tInicia funcion prueba");
    printf("\n\tp:%p\t %p",puntero,&puntero);
    *puntero = 10;
    printf("\n\tFin de la funcion prueba");
}