#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int ciclo(int);
int pedirValor();
#define N 3
int main(){
    int x=1;
    int cont=pedirValor();
    int sumX=0,sumY=0;
    int y=0;
    do{
        sumY = 0;
        sumX=ciclo(x);
        //printf("Suma de X: %d\n",sumX);
        y = sumX;
        if(x > y){
            sumY+=ciclo(y);
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
int pedirValor(){
    int x;
    printf("Cantidad de numeros: ");
    scanf("%d",&x);
    if(x<1)
        pedirValor();
    else
        return x;
}
int ciclo(int x){
    int sum  = 0;
    for (int j = 1; j < x; ++j) {
        if(x%j==0)
            sum+=j;
    }
    return sum;
}