#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Construye un programa en C que:
        al recibir como datos el nivel académico de un profesor de una universidad
        así como su salario, incremente este último siguiendo las especificaciones
        de la tabla e imprima tanto el nivel del profesor como su nuevo salario.

        Donde: NIV es una variable de tipo entero que representa el nivel del profesor.
        SAL es una variable de tipo real que representa el salario del profesor.

        |Nivel  |Incremento |
        |   1   |   3.5%    |
        |   2   |   4.1%    |
        |   3   |   4.8%    |
        |   4   |   5.3%    |
    */
    int niv;
    float sal;
    printf("Ingresa el nivel academico del profesor (1-4): ");
    scanf("%d",&niv);
    printf("%d",niv);
    printf("\nIngresa el salario del profesor: ");
    scanf("%f",&sal);
    printf("%0.3f",sal);

    switch(niv){
    case 1:
        sal = sal * 1.035;
        break;
    case 2:
        sal = sal * 1.041;
        break;
    case 3:
        sal = sal * 1.048;
        break;
    case 4:
        sal = sal * 1.053;
        break;
    default:
        printf("\nNo se selecciono un nivel academico");
    }
    printf("\nNivel academico: %d, Salario: %f", niv, sal);
}
