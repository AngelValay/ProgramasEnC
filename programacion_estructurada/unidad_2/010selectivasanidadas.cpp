#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Construye un programa en C que,
        al recibir como datos las ventas de tres vendedores de una tienda de discos,
        escriba las mismas en forma descendente. Considera que todas las ventas son
        diferentes y no utilices operadores lógicos para agrupar las condiciones.

        Datos: P, S y R (variables de tipo real que representan las ventas de los tres vendedores).
    */
    float p,s,r;
    printf("Venta del primer vendedor: ");
    scanf("%f",&p);
    printf("%f",p);
    printf("\nVenta del segundo vendedor: ");
    scanf("%f",&s);
    printf("%f",s);
    printf("\nVenta del tercer vendedor: ");
    scanf("%f",&r);
    printf("%f",r);

    if(p<s){
        if(p<r){
            if(s<r){
                printf("\n1,2,3");
            }else{
                printf("\n1,3,2");
            }
        }else{
            if(s<p){
                printf("\n3,2,1");
            }else{
                printf("\n3,1,2");
            }
        }
    }else{ // s<p
        if(s<r){
            if(p<r){
                printf("\n2,3,1");
            }else{
                printf("\n2,3,1");
            }
        }else{
            printf("\n1,3,2");
        }
    }
}
