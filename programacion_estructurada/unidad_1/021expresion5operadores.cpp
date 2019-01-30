#include <stdio.h>
#include <stdlib.h>
//5 OPERADORES
int main(){
    int a;
    int b;
    int c;

    a = 15;
    b = 45;
    c = -4;
    /*printf("a = %d, b = %d, c = %d", a,b,c);
    printf("\nc-a -> %d", c-a);
    printf("\nc-a!=c -> %d", c-a!=c);
    printf("\n!(c-a!=c) -> %d", !(c-a!=c));
    printf("\na+b -> %d", a+b);
    printf("\nb*c -> %d", b*c);
    printf("\na+b<b*c -> %d", a+b<b*c);
    printf("\na+b<b*c && !(c-a!=c) -> %d", a+b<b*c && !(c-a!=c));
    printf("\nb-a -> %d", b-a);
    printf("\nb-a>c -> %d", b-a>c);
    printf("\na+b<b*c && !(c-a!=c) || b-a>c -> %d", a+b<b*c && !(c-a!=c) || b-a>c);*/
    printf("\n!(a+b<b*c && !(c-a!=c) || b-a>c) -> %d", !(a+b<b*c && !(c-a!=c) || b-a>c));
}
