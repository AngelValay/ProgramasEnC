#include <stdio.h>
#include <stdlib.h>

int main(){
    int minN = 10;
    int maxN = 100;
    int subRan = 0;
    int cantRan = 0;
    int difRan = maxN-minN + 1;
    int rangosMen[difRan]={0};
    int rangosMay[difRan]={0};
    scanf("%d",&subRan);
    int resRan = difRan%subRan;
    cantRan = difRan/subRan;
    printf("%d.\n",resRan);
    int contMen = 0;
    int contMay = 0;
    for(int a=0;a<subRan;a++){
        rangosMen[a] = minN + (a*cantRan);
        rangosMay[a] = minN + ((a+1)*cantRan) - 1;
        if(a>=(subRan - resRan)){
            contMay++;
            printf("%d\n",a);
            if(a==((subRan - resRan))){
                rangosMay[a] += contMay;
            }else{
                contMen++;
                rangosMen[a] += contMen;
                rangosMay[a] += contMay;
            }


        }

    }
    for(int d=0;d<subRan;d++)
        printf("[%d,%d]",rangosMen[d],rangosMay[d]);


}
