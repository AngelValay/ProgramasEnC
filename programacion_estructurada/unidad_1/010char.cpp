#include <stdlib.h>
#include <stdio.h>

int main(){
    int x;
    char c;
    printf("Input x: ");
    scanf("%d",&x);
    printf("Input c: ");
    scanf(" %c",&c);    //Espacio para funcionar el scanf
    //scanf("%c",&c);
    printf("\nOutput: %d",x);
    printf("\nOutput: %c",c);

}
