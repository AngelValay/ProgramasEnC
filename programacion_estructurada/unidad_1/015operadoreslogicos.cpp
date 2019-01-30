#include <stdio.h>
#include <stdlib.h>

int main(){
    int p;
    int q;
    p = 1;
    q = 1;
    printf("%d && %d -> %d",p,q,p&&q);
    printf("\n%d || %d -> %d",p,q,p||q);
    printf("\n!%d -> %d",p,!p);
    printf("\n!%d -> %d",q,!q);
}
