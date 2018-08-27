#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float b;
    float c;
    a = 10;
    b = 78;
    c = 3;
    printf("a = %f\nb = %f\nc = %f\n",a,b,c);
    printf("4 operadores -> ( a * 4 ) / b + (c/3) = %f",(a*4)/b+(c/3));

    a = 7;
    b = -7;
    c = 10;
    printf("\n\na = %f\nb = %f\nc = %f\n",a,b,c);
    printf("3 operadores -> ( a / b - 5 ) + ( c / 3 ) = %f",(a/b-5)+(c/3));

    a = 8;
    b = -1;
    c = 78;
    printf("\n\na = %f\nb = %f\nc = %f\n",a,b,c);
    printf("2 operadores -> a + b * c = %f",a+b*c);
}
