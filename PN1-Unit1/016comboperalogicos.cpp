#include <stdio.h>
#include <stdlib.h>

int main(){
    int p;
    int q;
    p = 1;
    q = 1;
    printf("2 operadores\t!(%d && %d) -> %d",p,q,!(p&&q));
    printf("\n3 operadores\t(!%d && %d) || %d -> %d",p,q,p,(!p&&q)||q);
    printf("\n1 operador\t!%d -> %d",p,!p);
}
