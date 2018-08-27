#include <stdio.h>
#include <stdlib.h>

int main(){
    int max1=1;
    int min1=10,suma=0;
    do{
        printf("min1 = %d\n",min1);
        suma+=min1; //suma = suma + min1;
        min1--;
        if(min1<max1)
            break;
    }while(true);
    printf("Valor de suma = %d\n",suma);
    printf("valor final de min1 = %d \n\n",min1);

    min1=1,suma=0; max1=10;
    do{
        printf("min1 = %d\n",min1);
        suma+=min1;
        min1++;
        if(min1>max1)
            break;
    }while(true);
    printf("Valor de suma = %d\n",suma);
    printf("valor final de min1 = %d",min1);
}
