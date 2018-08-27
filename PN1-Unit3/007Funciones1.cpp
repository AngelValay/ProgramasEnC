#include <iostream>
void mostrarPromedio(float,float,float);
float calculo(int, float, double);
int main() {
    float prom1,prom2,prom3;
    printf("Dame la 1era calificacion:");
    scanf("%f",&prom1);
    printf("Dame la 2da calificacion:");
    scanf("%f",&prom2);
    printf("Dame la 3era calificacion:");
    scanf("%f",&prom3);
    mostrarPromedio(prom1,prom2,prom3);
    /////////////TAREA//////////////
    int a = 0;
    float b = 0;
    double c = 0;
    printf("\n---------------TAREA 2 ---------------\n");
    printf("Dame el 1er numero: ");
    scanf("%d",&a);
    printf("Dame el 2do numero: ");
    scanf("%f",&b);
    printf("Dame el 3er numero: ");
    scanf("%lf",&c);
    printf("Calculo: %f",calculo(a,b,c));
    return 0;
}
void mostrarPromedio(float p1 ,float p2 ,float p3){
    printf("Tu promedio de %0.2f, %0.2f y %0.2f es %0.2f",p1,p2,p3,(p1+p2+p3)/3);
}
float calculo(int a, float b, double c){
    return (float)((a * b) * c);
}