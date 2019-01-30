#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 20
#define MIN 1
#define MAX 21

int main()
{

    srand(time(0));
    int minN=0;
    int maxN=0;
	int c=0;
	int aux = 0;
	int numeros[D];
	int i =0;
	int cantLim = 0; //cantidad de sublimites
    int cantRan = 0;
    int difRan = 0;
    int resRan = 0;
    int contMen = 0;
    int contMay = 0;
    //Pedir los numeros de la longiud
    printf("Numero minimo: ");
    scanf("%d",&minN);
    do{
        printf("\nNumero mayor: ");
        scanf("%d",&maxN);
	}while(minN>=maxN);

	difRan = maxN-minN + 1;
	int rangosMen[difRan]={0};
    int rangosMay[difRan]={0};

    system("cls");
    //SUBRANGOS
	do{
        printf("En cuantas partes quieres? ");
        scanf("%d",&cantLim);
	}while(cantLim<1 || cantLim>(maxN-minN));
	resRan = difRan%cantLim;
	cantRan = difRan/cantLim;
	//system("cls");
	//SUBRANGOS
	for(int a=0;a<cantLim;a++){
        rangosMen[a] = minN + (a*cantRan);
        rangosMay[a] = minN + ((a+1)*cantRan) - 1;
        if(a>=(cantLim - resRan)){
            contMay++;
            printf("%d\n",a);
            if(a==((cantLim - resRan))){
                rangosMay[a] += contMay;
            }else{
                contMen++;
                rangosMen[a] += contMen;
                rangosMay[a] += contMay;
            }


        }

    }
    //NO REPETIR NUMEROS
	for (c = 0; c < D; ++c)
	{
		int seRepite = 1;
		if (c == 0)
		{
			aux = minN+ rand()%(maxN-minN);
			numeros[c] = aux;
		}else{
			while(seRepite){
				aux = minN + rand()%(maxN-minN);
				numeros[c] = aux;
				for (i = 0; i < c; ++i)
				{
					if (numeros[i] == numeros[c]){
						seRepite = 1;
						break;
					}else
						seRepite = 0;
				}
			}
		}
        //printf("%d,",numeros[c]);
	}
	printf("Numeros obtenidos: \n");
	for(int a=0;a<D;a++){
        printf("%5d,",numeros[a]);
	}
	printf("\nRangos obtenidos:\n");
	int cantSubRan[cantLim]={0};

	for(int r=0;r<cantLim;r++){
        for(int w=0;w<D;w++){
            //printf("%d,%d = %d ? %d \n",rangosMen[r],rangosMay[r],numeros[w],);
            if((numeros[w]>=rangosMen[r]) && (numeros[w]<=rangosMay[r]))
                cantSubRan[r]++;
        }
	}
    //RESULTADOS OBTENIDOS
    for(int x=0;x<cantLim;x++){
        printf("[%d,%d] = %d\n",rangosMen[x],rangosMay[x],cantSubRan[x]);
    }
	return 0;
}
