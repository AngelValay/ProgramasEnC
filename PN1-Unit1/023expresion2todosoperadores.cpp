#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    a = 2;
    b = 3;
    c = 8;
    printf("\na*b -> %d",a*b);
    printf("\nb/a -> %d",b/a);
    printf("\na*b>b/a -> %d",a*b>b/a);
    printf("\nb%%c -> %d",b%c);
    printf("\nb%%c<a -> %d",b%c<a);
    printf("\na*b>b/a || b%%c<a -> %d",a*b>b/a || b%c<a);
    printf("\n(c-a<=a*b && (a*b>b/a || b%%c<a)) && (b>=a || (b!=c || (b==c))) -> %d",(c-a<=a*b && (a*b>b/a || b%c<a)) && (b>=a || (b!=c || (b==c))));
    printf("\n(c-a<=a*b && (a*b>b/a || b%%c<a)) && (b>=a || (b!=c || (b==c))) -> %d",(c-a<=a*b && (a*b>b/a || b%c<a)) && (b>=a || (b!=c || (b==c))));
}
