#include <stdlib.h>
#include <stdio.h>

int main(){
    unsigned int num6;
    num6 = 13545;
    printf("Longitud en bytes de UNSIGNED INT: %i",sizeof(num6));
    int num;
    num = 1567546;
    printf("\nLongitud en bytes de INT: %i",sizeof(num));
    short int num4;
    num4 = 1664;
    printf("\nLongitud en bytes de SHORT INT: %i",sizeof(num4));
    long int num5;
    num5 = 163434545;
    printf("\nLongitud en bytes de LONG INT: %i",sizeof(num5));
    float num2;
    num = 1554.164;
    printf("\nLongitud en bytes de FLOAT: %i",sizeof(num2));
    double num3;
    num3 = 15578.4466798;
    printf("\nLongitud en bytes de DOUBLE: %i",sizeof(num3));
    char letra;
    letra = '3';
    printf("\nLongitud en bytes de CHAR: %i",sizeof(letra));
    bool bin;
    bin = 0;
    printf("\nLongitud en bytes de BOOL: %i",sizeof(bin));

}
