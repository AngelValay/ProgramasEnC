#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define N 3
int main(){
    int x=1;
    int cont=15;
    int sumX=0,sumY=0;
    int y=0;
    do{
        printf("Cuantos pares de numeros amigos quieres? : ");
        //scanf("%d",&cont);
    }while(cont<=0);
    do{
        sumX=0;
        sumY=0;
        for(int i = 1;i<x;i++){
            if(x%i==0){
                sumX+=i;
            }
        }
        //printf("Suma de X: %d\n",sumX);
        y = sumX;
        if(x > y){
            for(int i = 1;i<y;i++){
                if(y%i==0)
                    sumY+=i;
            }
            if(sumX==y && sumY==x){
                cont--;
                printf("Son numeros amigos: ");
                printf("%d - %d\n",sumX,sumY);
            }
        }

        x++;
    }while(cont>0);


    return 0;
}
