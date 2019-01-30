#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Teclea un numero entero: ");
    scanf("%i",&a);
    printf("El valor ingresado fue: %i", a);

    float b;
    printf("\nTeclea un numero corto decimal: ");
    scanf("%f",&b);
    printf("El 2do valor ingresado fue: %f", b);

    double c;
    printf("\nTeclea un numero decimal grande: ");
    scanf("%lf",&c);
    printf("El 3er valor ingresado fue: %lf", c);

    //getchar();
    char d;
    printf("\nTeclea un caracter: ");
    scanf(" %c",&d);
    d = d + 1;
    printf("El valor del 4to valor ingresado fue: %c", d);

}
