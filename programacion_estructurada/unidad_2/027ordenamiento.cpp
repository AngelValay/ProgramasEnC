#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] ={56,87,98,100,5};
    int a = 0;
    int b = 0;
    int aux = 0;
    printf("Ascendente: \n");
    for(a = 0;a<5;a++)
        for(b = a;b<5;b++){
            if(numeros[a]<numeros[b]){
                aux = numeros[b];
                numeros[b] = numeros[a];
                numeros[a] = aux;
            }
        }
    printf("[");
    for(a = 0;a<5;a++)
        printf("%d, ",numeros[a]);
    printf("]");
    printf("\nDescendente: \n");
    for(a = 0;a<5;a++)
        for(b = a;b<5;b++){
            if(numeros[a]>numeros[b]){
                aux = numeros[b];
                numeros[b] = numeros[a];
                numeros[a] = aux;
            }
        }
    printf("[");
    for(a = 0;a<5;a++)
        printf("%d, ",numeros[a]);
    printf("]");
}
