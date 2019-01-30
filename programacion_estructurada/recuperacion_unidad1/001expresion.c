#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\n!(a+b) >= (a-b) <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)");
    printf("\n!%5d >= (a-b) <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)",a+b);
    printf("\n!%5d >= %5d <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)",a+b,a-b);
    printf("\n!%5d >= %5d <= c/b && ((%3d<a)==(a*d>a)) || (c!=a)",a+b,a-b,c%a);
    printf("\n!%5d >= %5d <= c/b && (%7d==(a*d>a)) || (c!=a)",a+b,a-b,c%a<a);
    printf("\n!%5d >= %5d <= c/b && (%7d==(%3d>a)) || (c!=a)",a+b,a-b,c%a<a,a*d);
    printf("\n!%5d >= %5d <= c/b && (%7d==%7d) || (c!=a)",a+b,a-b,c%a<a,a*d>a);
    printf("\n!%5d >= %5d <= c/b && %18d || (c!=a)",a+b,a-b,c%a<a == a*d>a);
    printf("\n%6d >= %5d <= c/b && %18d || (c!=a)",!(a+b),a-b,c%a<a == a*d>a);
    printf("\n%6d >= %5d <= %3d && %18d || %d",!(a+b),a-b,c/b,c%a<a == a*d>a,c!=a);
    printf("\n%6d <= %12d && %18d || %d",!(a+b) >= a-b,c/b,c%a<a == a*d>a,c!=a);
    printf("\n%22d && %18d || %d",!(a+b) >= a-b <= c/b,c%a<a == a*d>a,c!=a);
    printf("\n%44d || %d",!(a+b) >= a-b <= c/b && (c%a<a == a*d>a),c!=a);
    printf("\n%49d",!(a+b)>=(a-b)<= c/b && ((c%a<a)==(a*d>a)) || (c!=a));
}
