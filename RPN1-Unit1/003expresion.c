#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\nb-c==d+a || !(a!=b/c && a<c%%a) || b<=a && c>a*b || d>=a");
    printf("\nb-c==d+a || !(a!=%3d && a<c%%a) || b<=a && c>a*b || d>=a",b/c);
    printf("\nb-c==d+a || !(a!=%3d && a<%3d) || b<=a && c>a*b || d>=a",b/c,c%a);
    printf("\nb-c==d+a || !(%6d && a<%3d) || b<=a && c>a*b || d>=a",a!=b/c,c%a);
    printf("\nb-c==d+a || !(%6d && %5d) || b<=a && c>a*b || d>=a",a!=b/c,a<c%a);
    printf("\nb-c==d+a || !(%15d) || b<=a && c>a*b || d>=a",a!=b/c && a<c%a);
    printf("\nb-c==d+a || %18d || b<=a && c>a*b || d>=a",!(a!=b/c && a<c%a));
    printf("\n%3d==d+a || %18d || b<=a && c>a*b || d>=a",b-c,!(a!=b/c && a<c%a));
    printf("\n%3d==%3d || %18d || b<=a && c>a*b || d>=a",b-c,d+a,!(a!=b/c && a<c%a));
    printf("\n%3d==%3d || %18d || b<=a && c>%3d || d>=a",b-c,d+a,!(a!=b/c && a<c%a),a*b);
    printf("\n%8d || %18d || b<=a && c>%3d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),a*b);
    printf("\n%8d || %18d || %4d && c>%3d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),b<=a,a*b);
    printf("\n%8d || %18d || %4d && %5d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),b<=a,c>a*b);
    printf("\n%8d || %18d || %4d && %5d || %3d",b-c==d+a,!(a!=b/c && a<c%a),b<=a,c>a*b,d>=a);
    printf("\n%8d || %18d || %13d || %3d",b-c==d+a,!(a!=b/c && a<c%a),b<=a && c>a*b,d>=a);
    printf("\n%30d || %13d || %3d",b-c==d+a || !(a!=b/c && a<c%a),b<=a && c>a*b,d>=a);
    printf("\n%47d || %3d",b-c==d+a || !(a!=b/c && a<c%a) || b<=a && c>a*b,d>=a);
    printf("\n%50d",b-c==d+a || !(a!=b/c && a<c%a) || b<=a && c>a*b || d>=a);
}
