#include <stdio.h>
#include <stdlib.h>
#define MAX 0

int main(){
    int max1=1;
    int min1=10,suma=0;
    for(;;){
        suma+=min1;
        printf("min1 = %d\n",min1);
        min1--;
        if(min1<max1)
            break;

    }
    printf("Valor de suma = %d\n",suma);
    printf("valor final de min1 = %d \n\n",min1);

}

/*
    min1=0,suma=0;
    for(min1=1;min1<=10;min1++){
        printf("min1 = %d\n",min1);
        suma+=min1;
    }
    printf("Valor de suma = %d\n",suma);
    printf("valor final de min1 = %d",min1);*/

