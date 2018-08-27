#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    a = 15;
    b = 5;
    c = 9;
    d = 6;
    //Uno de cada uno
    printf("Uno de cada uno:\n");
    printf("%d - %d\t\t->\t%d",a,b,a-b);
    printf("\n(%d - %d) > %d\t->\t%d",a,b,a,(a-b)>a);
    printf("\n!((%d - %d) > %d)->\t%d",a,b,a,!((a-b)>a));
    //dos de cada uno
    printf("\n\nDos de cada uno:\n");
    printf("%d-%d -> %d",a,b,a-b);
    printf("\n(%d-%d) > (%d+%d) -> %d",a,b,a,c,(a-b) > (a+c));
    printf("\n((%d-%d) > (%d+%d) && (%d!=%d) -> %d",a,b,a,c,a,b,((a-b) > (a+c) && (a!=b)));
    printf("\n!((%d-%d) > (%d+%d) && (%d!=%d)) -> %d",a,b,a,c,a,b,!((a-b) > (a+c) && (a!=b)));
    //tres de cada uno
    printf("\n%d",(d>c%a && a!=b*3 || !(b-c>=a)));
}
