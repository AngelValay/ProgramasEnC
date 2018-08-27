#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    a = 1;
    b = -1;
    c = 2;
    printf("\na+b ->%d",a+b);
    printf("\nb-c -> %d",b-c);
    printf("\na+b>b-c -> %d",a+b>b-c);
    printf("\nc%%a -> %d",c%a);
    printf("\na*c -> %d",a*c);
    printf("\nc%%a>=a*c -> %d",c%a>=a*c);
    printf("\n(a+b>b-c) && c%%a>=a*c) -> %d",(a+b>b-c) && c%a>=a*c);
    printf("\nb/c -> %d",b/c);
    printf("\nb/c<a -> %d",b/c<a);
    printf("\nc<=a -> %d",c<=a);
    printf("\nb!=c -> %d",b!=c);
    printf("\nb/c<a && c<=a -> %d",b/c<a && c<=a);
    printf("\nb/c<a && c<=a || b!=c -> %d",b/c<a && c<=a || b!=c);
    printf("\nc==c -> %d",c==c);
    printf("\n!(c==c) -> %d",!(c==c));
    printf("\n(b/c<a && c<=a || b!=c) && !(c==c) -> %d",(b/c<a && c<=a || b!=c) && !(c==c));
    printf("\n(a+b>b-c) && c%%a>=a*c || (b/c<a && c<=a || b!=c) && !(c==c) -> %d",(a+b>b-c) && c%a>=a*c || (b/c<a && c<=a || b!=c) && !(c==c));
}
