#include <iostream>
#include <math.h>
void calcularIMC (char[],int,float, double);
int main() {
    char input[20];
    int edad;
    float est;
    double peso;
    printf("Dame tu nombre: ");
    gets(input);
    printf("Dame tu edad:");
    scanf("%d",&edad);
    printf("Dame tu estatura: ");
    scanf("%f",&est);
    printf("Dame tu peso exacto: ");
    scanf("%lf",&peso);
    calcularIMC(input,edad,est,peso);
    return 0;
}
void calcularIMC(char nombre[],int edad,float estatura, double peso){
    double imc = peso / pow(estatura,2);
    printf("%s con %d anos de edad cuenta con %lf",nombre,edad,imc);
}