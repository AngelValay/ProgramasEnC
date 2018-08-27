#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1,p2,p3;
    float res;
    printf("Ingresa la 1era calificacion: ");
    scanf("%f",&p1);
    printf("Ingresa la 2da calificacion: ");
    scanf("%f",&p2);
    printf("Ingresa la 3era calificacion: ");
    scanf("%f",&p3);

    res = (p1+p2+p3)/3;
    if(res>6){
        printf("\nEl alumno esta Aprobado");
    }else{
        printf("\nEl alumno esta Reprobado");
    }
}
