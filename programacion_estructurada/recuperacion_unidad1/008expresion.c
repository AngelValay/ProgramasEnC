#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\n10+a==d || 9!=c*d && !(7>c-a || 6<a%%d) || (4>=b/a && 3<=c)");
    printf("\n10+a==d || 9!=c*d && !(7>c-a || 6<%3d) || (4>=b/a && 3<=c)",a%d);
    printf("\n10+a==d || 9!=c*d && !(7>%3d || 6<%3d) || (4>=b/a && 3<=c)",c-a,a%d);
    printf("\n10+a==d || 9!=c*d && !(%5d || 6<%3d) || (4>=b/a && 3<=c)",7>c-a,a%d);
    printf("\n10+a==d || 9!=c*d && !(%5d || %5d) || (4>=b/a && 3<=c)",7>c-a,6<a%d);
    printf("\n10+a==d || 9!=c*d && !%16d || (4>=b/a && 3<=c)",7>c-a || 6<a%d);
    printf("\n10+a==d || 9!=c*d && !%16d || (4>=%3d && 3<=c)",7>c-a || 6<a%d,b/a);
    printf("\n10+a==d || 9!=c*d && !%16d || (%6d && 3<=c)",7>c-a || 6<a%d,4>=b/a);
    printf("\n10+a==d || 9!=c*d && !%16d || (%6d && %4d)",7>c-a || 6<a%d,4>=b/a,3<=c);
    printf("\n10+a==d || 9!=c*d && !%16d || %16d",7>c-a || 6<a%d,4>=b/a && 3<=c);
    printf("\n10+a==d || 9!=c*d && %17d || %16d",!(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n10+a==d || 9!=%3d && %17d || %16d",c*d,!(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%4d==d || 9!=%3d && %17d || %16d",10+a,c*d,!(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%7d || 9!=%3d && %17d || %16d",10+a==d,c*d,!(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%7d || %6d && %17d || %16d",10+a==d,9!=c*d,!(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%7d || %27d || %16d",10+a==d,9!=c*d && !(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%38d || %16d",10+a==d || 9!=c*d && !(7>c-a || 6<a%d),4>=b/a && 3<=c);
    printf("\n%58d",10+a==d || 9!=c*d && !(7>c-a || 6<a%d) || (4>=b/a && 3<=c));
}
