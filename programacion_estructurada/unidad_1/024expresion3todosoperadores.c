#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    a = 7;
    b = 8;
    c = 2;
    printf("\n(c-a<=a*b && (a*b>b/a || b%%c<a)) && (b>=a || (b!=c || (b==c))) -> %d",c<=a && (a-c!=c || (a+b==b*c)) && (b>=a/a ||(a*b>b || b<a%c)));
}
