#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double muestra[4] = {6,2,3,1};
    double media = 0;
    int i = 0;
    //CALCULA LA MEDIA
    while(true){
        media+=muestra[i];
        i++;
        if(i>=4) {
            break;
        }
    }
    media/=i;
    //printf("Media: %0.2lf",media);
    //CALCULA LA SUMA
    double sumatoria = 0;
    int j = 0;
    do{
        if(j>=4)
            break;
        else
            sumatoria += pow(muestra[j]-media,2);
        j++;
    }while(true);
    sumatoria/=4;
    //SACAR LA RAIZ CUADRADA
    sumatoria = sqrt(sumatoria);
    printf("\nRes = %0.2lf",sumatoria);
    return 0;
}