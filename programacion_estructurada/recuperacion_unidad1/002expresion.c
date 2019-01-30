#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || (a==b) && (a!=b))");
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || %6d && (a!=b))",a==b);
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || %6d && %d)",a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%3d>a || a<=b%%c || %6d && %d)",a*d,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%3d>a || a<=%3d || %6d && %d)",a*d,b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%5d || a<=%3d || %6d && %d)",a*d>a,b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%5d || %6d || %6d && %d)",a*d>a,a<=b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%5d || %6d || %6d)",a*d>a,a<=b%c,a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%5d || %6d)",a*d>a || a<=b%c,a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%5d)",a*d>a || a<=b%c || a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || %d",!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%3d && a-c>=a/b || %d",a*c,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%3d && a-c>=a/b || %d",a*c,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%3d && a-c>=%3d || %d",a*c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%3d<%3d && a-c>=%3d || %d",a+b,a*c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%3d<%3d && %3d>=%3d || %d",a+b,a*c,a-c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%7d && %3d>=%3d || %d",a+b<a*c,a-c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%7d && %8d || %d",a+b<a*c,a-c>=a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%19d || %d",a+b<a*c && a-c>=a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%24d", a+b<a*c && a-c>=a/b || !(a*d>a || a<=b%c || (a==b) && (a!=b)));
}
