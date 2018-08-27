#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion,forma;
    int suma=0;
    printf("Elige que ciclo deseas manejar: \n\t1. FOR\n\t2. WHILE\n\t3. DO-WHILE\n");
    scanf("%d",&opcion);
    system("cls");
    printf("Elige de que forma: \n\t1. ASCENDENTE\n\t2. DESCENDENTE\n");
    scanf("%d",&forma);
    system("cls");
    switch(opcion){
        case 1:
            printf("FOR\n");
            if(forma==1)
                for(int a=1;a<=10;a++)
                    suma+=a;
            else
                if(forma==2)
                    for(int a=10;a>=1;a--)
                        suma+=a;
                else
                    printf("NO VALIDO");
            break;
        case 2:
            printf("WHILE\n");
            if(forma==1){
                int a=1;
                while(a<=10){
                    suma+=a;
                    a++;
                }
                printf("%d",suma);
            }else{
                if(forma==2){
                        int a=10;
                        while(a>=1){
                            suma+=a;
                            a--;
                        }
                        printf("%d",suma);
                }else{
                    printf("OPCION INVALIDA");
                }

            }
            break;
        case 3:
            printf("DO-WHILE\n");
            if(forma==1){
                int a=1;
                do{
                    suma+=a;
                    a++;
                }while(a<=10);
                printf("%d",suma);
            }else{
                if(forma==2){
                    int a=10;
                    do{
                        suma+=a;
                        a--;
                    }while(a>=1);
                    printf("%d",suma);
                }else{
                    printf("OPCION INVALIDA");
                }
            }
            break;
        default:
            printf("ENTRADA INVALIDA");
    }

}
