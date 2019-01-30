#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10,b=5,c=7,d=9;
    printf("a=10,b=5,c=7,d=9");
    printf("\na>6-b || b<8*c && c/7<=a || d%%a>=c || !(a==80+b || b!=78)");
    printf("\na>6-b || b<8*c && c/7<=a || d%%a>=c || !(a==%4d || b!=78)",80+b);
    printf("\na>6-b || b<8*c && c/7<=a || d%%a>=c || !(%7d || %5d)",a==80+b,b!=78);
    printf("\na>6-b || b<8*c && c/7<=a || d%%a>=c || !%d",a==80+b || b!=78);
    printf("\na>6-b || b<8*c && c/7<=a || d%%a>=c || %d",!(a==80+b || b!=78));
    printf("\na>6-b || b<%3d && c/7<=a || d%%a>=c || %d",8*c,!(a==80+b || b!=78));
    printf("\na>6-b || b<%3d && %3d<=a || d%%a>=c || %d",8*c,c/7,!(a==80+b || b!=78));
    printf("\na>6-b || b<%3d && %3d<=a || %3d>=c || %d",8*c,c/7,d%a,!(a==80+b || b!=78));
    printf("\na>%3d || b<%3d && %3d<=a || %3d>=c || %d",6-b,8*c,c/7,d%a,!(a==80+b || b!=78));
    printf("\n%5d || b<%3d && %3d<=a || %3d>=c || %d",a>6-b,8*c,c/7,d%a,!(a==80+b || b!=78));
    printf("\n%5d || %5d && %3d<=a || %3d>=c || %d",a>6-b,b<8*c,c/7,d%a,!(a==80+b || b!=78));
    printf("\n%5d || %5d && %6d || %3d>=c || %d",a>6-b,b<8*c,c/7<=a,d%a,!(a==80+b || b!=78));
    printf("\n%5d || %5d && %6d || %6d || %d",a>6-b,b<8*c,c/7<=a,d%a>=c,!(a==80+b || b!=78));
    printf("\n%5d || %15d || %6d || %d",a>6-b,b<8*c && c/7<=a,d%a>=c,!(a==80+b || b!=78));
    printf("\n%24d || %6d || %d",a>6-b || b<8*c && c/7<=a,d%a>=c,!(a==80+b || b!=78));
    printf("\n%34d || %d",a>6-b || b<8*c && c/7<=a || d%a>=c,!(a==80+b || b!=78));
    printf("\n%39d",a>6-b || b<8*c && c/7<=a || d%a>=c || !(a==80+b || b!=78));
}
