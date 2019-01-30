#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("5+8 = %d",5+8);
    printf("\n5*8 = %d",5*8);
    printf("\n(5+8)>9 %d",(5+8)>9);
    printf("\n(5*8)>9 %d",(5*8)>9);
    printf("\n(5+8)>9 || (5*8)>9) -> %d",((5+8)>9 || (5*8)>9));
    printf("\n\n15!=0 -> %d",15!=0);
    printf("\n10!=0 -> %d",10!=0);
    printf("\n2<10 -> %d",2<10);
    printf("\n15!=0 && 10!=0 || 2<10 -> %d",15!=0 && 10!=0 || 2<10);
}
