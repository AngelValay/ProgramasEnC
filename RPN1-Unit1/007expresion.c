#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("\n9!=a/c || 8%%a==a && !(a>b*a && b<c || a>=9+b && d<=10-c)");
    printf("\n9!=a/c || 8%%a==a && !(a>%3d && b<c || a>=9+b && d<=10-c)",b*a);
    printf("\n9!=a/c || 8%%a==a && !(a>%3d && b<c || a>=%3d && d<=10-c)",b*a,9+b);
    printf("\n9!=a/c || 8%%a==a && !(a>%3d && b<c || a>=%3d && d<=%3d)",b*a,9+b,10-c);
    printf("\n9!=a/c || 8%%a==a && !(%5d && b<c || a>=%3d && d<=%3d)",a>b*a,9+b,10-c);
    printf("\n9!=a/c || 8%%a==a && !(%5d && %3d || a>=%3d && d<=%3d)",a>b*a,b<c,9+b,10-c);
    printf("\n9!=a/c || 8%%a==a && !(%5d && %3d || %6d && d<=%3d)",a>b*a,b<c,a>=9+b,10-c);
    printf("\n9!=a/c || 8%%a==a && !(%5d && %3d || %6d && %6d)",a>b*a,b<c,a>=9+b,d<=10-c);
    printf("\n9!=a/c || 8%%a==a && !(%12d || %6d && %6d)",a>b*a && b<c,a>=9+b,d<=10-c);
    printf("\n9!=a/c || 8%%a==a && !(%12d || %16d)",a>b*a && b<c,a>=9+b&&d<=10-c);
    printf("\n9!=a/c || 8%%a==a && !%d",a>b*a && b<c || a>=9+b&&d<=10-c);
    printf("\n9!=a/c || 8%%a==a && %2d",!(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n9!=%3d || 8%%a==a && %2d",a/c,!(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n9!=%3d || %3d==a && %2d",a/c,8%a,!(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n%6d || %3d==a && %2d",9!=a/c,8%a,!(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n%6d || %6d && %2d",9!=a/c,8%a==a,!(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n%6d || %12d",9!=a/c,8%a==a && !(a>b*a && b<c || a>=9+b&&d<=10-c));
    printf("\n%22d",9!=a/c || 8%a==a && !(a>b*a && b<c || a>=9+b && d<=10-c));
}
