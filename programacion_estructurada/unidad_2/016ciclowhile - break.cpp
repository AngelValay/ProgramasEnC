#include <stdio.h>
#include <stdlib.h>
#define MAX 0

int main(){
    int min1=10,suma=0;
    while(min1>=MAX){
        if(min1<MAX)
            break;
        printf("min1 = %d\n",min1);
        suma+=min1;
        min1--;
        //system("PAUSE");
    }

    printf("Valor de suma = %d\n",suma);
    printf("valor final de min1 = %d",min1);
}
