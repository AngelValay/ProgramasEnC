#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
int main() {
    int evaRango=0,longarreglo=0,numMin=0,numMax=0,aleatorio=0,index=0,i=0;
    int evaluar=0,contador=0,flag=0,a=0,b=1,cnt=0;
    srand(time(0));
    printf("\n\nLongitud arreglo: ");
    scanf("%d",&longarreglo);
    printf("\nIngresa el rango\n");
    printf("\nMin: ");
    scanf("%d",&numMin);
    printf("\nMax: ");
    scanf("%d",&numMax);

    int arregloRandom [longarreglo]={0};
    int ordenamiento [longarreglo]={0};
    int final [longarreglo]={0};
    while (index!=longarreglo){
        aleatorio=numMin+rand()%(numMax-numMin+1);
        for (i = 0; i < longarreglo; i++) {
            if(arregloRandom[i]==aleatorio)
                break;
        }
        if (i==longarreglo){
            arregloRandom[index]=aleatorio;
            index++;
        }
    }
    printf("\nArreglo desordenado\n\n");
    for (i = 0; i < longarreglo; i++) {
        printf("%d,",arregloRandom[i]);
    }
    printf("\n\n");
    /*int contador=0;
    for (int k = 0; k < longarreglo; ++k) {
        contador=0;
        for (int l = 0; l < longarreglo; ++l) {
            if (arreglo[k]>arreglo[l]){
                contador++;
            }
        }
        ordenamiento[contador]=arreglo[k];
    }

    for (int m = 0; m < longarreglo; ++m) {
        printf("%d\n",ordenamiento[m]);
    }*/
    index=0;
    int recursivo=longarreglo-1,asendente=0;
    while(true){
        if (contador<longarreglo){
            if (arregloRandom[contador]>arregloRandom[index])
                evaluar++;
            if (index==longarreglo-1){
                ordenamiento[evaluar]=arregloRandom[contador];
                evaluar=0;
                index=-1;
                contador++;
            }index++;
        }
        if (contador==longarreglo)
            flag=1;
        if (flag==1){
            if(cnt%2==0){
                final[a]=ordenamiento[asendente];
                a+=2;
                asendente++;
            }else{
                final[b]=ordenamiento[recursivo];
                b+=2;
                recursivo--;
            }
            if (cnt==longarreglo){
                break;
            }cnt++;
        }
    }
    for (i = 0; i < longarreglo; i++) {
        if (i%2==0)
            printf("\n");
        printf("%d, ",final[i]);
    }
    /*int a=0;
    int b=1;
    int recursivo=longarreglo-1;
    int asendente=0;
    contador=0;
    while (true){
        if(contador%2==0){
            final[a]=ordenamiento[asendente];
            a+=2;
            asendente++;
        }else{
            final[b]=ordenamiento[recursivo];
            b+=2;
            recursivo--;
        }
        if (contador==longarreglo){
            break;
        }
        contador++;
    }*/
    return 0;
}

