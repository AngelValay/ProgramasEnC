#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int y;
    int sumX=0,sumY=0;
    do{
        printf("X: ");
        scanf("%d",&x);
    }while(x<1);
    do{
        printf("Y: ");
        scanf("%d",&y);
    }while(y<1);

    for(int i = 1;i<x;i++){
        if(x%i==0)
            sumX+=i;
    }
    for(int i = 1;i<y;i++){
        if(y%i==0)
            sumY+=i;
    }
    printf("%d - %d\n",sumX,sumY);
    if(sumX==y && sumY==x && y!=x)
        printf("Son numeros amigos");
    else
        printf("No son numeros amigos");
    return 0;
}
