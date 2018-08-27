#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\n(c-a<=a*b && (a>b/a || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))");
    printf("\n(c-a<=a*b && (a>%3d || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a);
    printf("\n(c-a<=a*b && (a>%3d || %3d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a,b%d);
    printf("\n(c-a<=a*b && (%5d || %3d<a)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d);
    printf("\n(c-a<=a*b && (%5d || %5d)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d<a);
    printf("\n(c-a<=a*b && %16d) && !(d>=a || (d!=c || (a==c+a)))",a>b/a || b%d<a);
    printf("\n(c-a<=%3d && %16d) && !(d>=a || (d!=c || (a==c+a)))",a*b,a>b/a || b%d<a);
    printf("\n(%3d<=%3d && %16d) && !(d>=a || (d!=c || (a==c+a)))",c-a,a*b,a>b/a || b%d<a);
    printf("\n(%8d && %16d) && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b,a>b/a || b%d<a);
    printf("\n%30d && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b && a>b/a || b%d<a);
    printf("\n%30d && !(d>=a || (d!=c || (a==%d)))",c-a<=a*b && a>b/a || b%d<a,c+a);
    printf("\n%30d && !(d>=a || (d!=c || %d))",c-a<=a*b && a>b/a || b%d<a,a==c+a);
    printf("\n%30d && !(d>=a || (%d || %d))",c-a<=a*b && a>b/a || b%d<a,d!=c,a==c+a);
    printf("\n%30d && !(d>=a || %d)",c-a<=a*b && a>b/a || b%d<a,d!=c || a==c+a);
    printf("\n%30d && !(%d || %d)",c-a<=a*b && a>b/a || b%d<a,d>=a, d!=c || a==c+a);
    printf("\n%30d && !%d",c-a<=a*b && a>b/a || b%d<a,(d>=a || (d!=c || a==c+a)));
    printf("\n%30d && %d",c-a<=a*b && a>b/a || b%d<a,!(d>=a || (d!=c || a==c+a)));
    printf("\n%30d",(c-a<=a*b && (a>b/a || b%d<a)) && !(d>=a || (d!=c || (a==c+a))));
}
