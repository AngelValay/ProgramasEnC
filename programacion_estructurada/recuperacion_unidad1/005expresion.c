#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("(a+7>b) || c%%a>=a*b-8 && !(b/c<a || c<=a-7 || b!=1) && (c==6)");
    printf("\n(%3d>b) || c%%a>=a*b-8 && !(b/c<a || c<=a-7 || b!=1) && (c==6)",a+7);
    printf("\n%7d || c%%a>=a*b-8 && !(b/c<a || c<=a-7 || b!=1) && (c==6)",a+7>b);
    printf("\n%7d || c%%a>=a*b-8 && !(%3d<a || c<=a-7 || b!=1) && (c==6)",a+7>b, b/c);
    printf("\n%7d || c%%a>=a*b-8 && !(%3d<a || c<=%3d || b!=1) && (c==6)",a+7>b, b/c,a-7);
    printf("\n%7d || c%%a>=a*b-8 && !(%5d || c<=%3d || b!=1) && (c==6)",a+7>b, b/c<a,a-7);
    printf("\n%7d || c%%a>=a*b-8 && !(%5d || %6d || b!=1) && (c==6)",a+7>b, b/c<a,c<=a-7);
    printf("\n%7d || c%%a>=a*b-8 && !(%5d || %6d || %4d) && (c==6)",a+7>b, b/c<a,c<=a-7,b!=1);
    printf("\n%7d || c%%a>=a*b-8 && !(%5d || %14d) && (c==6)",a+7>b, b/c<a || c<=a-7,b!=1);
    printf("\n%7d || c%%a>=a*b-8 && !%25d && (c==6)",a+7>b, b/c<a || c<=a-7,b!=1);
    printf("\n%7d || c%%a>=a*b-8 && !%25d && %i",a+7>b, (b/c<a || c<=a-7|| b!=1), c==6);
    printf("\n%7d || c%%a>=a*b-8 && %26d && %d",a+7>b, !(b/c<a || c<=a-7 || b!=1),c==6);
    printf("\n%7d || %3d>=a*b-8 && %26d && %d",a+7>b,c%a, !(b/c<a || c<=a-7 || b!=1),c==6);
    printf("\n%7d || %3d>=%3d-8 && %26d && %d",a+7>b,c%a, a*b , !(b/c<a || c<=a-7|| b!=1),c==6);
    printf("\n%7d || %3d>=%5d && %26d && %d",a+7>b,c%a, a*b-8 , !(b/c<a || c<=a-7|| b!=1),c==6);
    printf("\n%7d || %10d && %26d && %d",a+7>b,c%a > a*b-8 , !(b/c<a || c<=a-7|| b!=1),c==6);
    printf("\n%7d || %10d && %26d",a+7>b,c%a > a*b-8 && !(b/c<a || c<=a-7|| b!=1),c==6);
    printf("\n%7d || %10d",a+7>b,c%a > a*b-8 && !(b/c<a || c<=a-7|| b!=1) && c==6);
    printf("\n%7d",(a+7>b) || c%a>=a*b-8 && !(b/c<a || c<=a-7 || b!=1) && (c==6));
}
