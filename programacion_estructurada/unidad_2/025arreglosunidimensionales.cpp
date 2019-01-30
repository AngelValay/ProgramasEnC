#include <stdio.h>
#include <stdlib.h>

int main(){
    //array unidimensional
    int a = 2;
    int numeros[a] ={0};
    int n = 0;
    char cadena[50];
    for(n=0;n<2;n++){
        printf("Dame un numero: ");
        scanf("%d",&numeros[n]);
    }
    for(n=0;n<2;n++){
        printf("%d\n",numeros[n]);

    }
    //array bidimensional
    int tablaNumeros[2][2]={0};
    int n1 =0;
    int n2 = 0;
    for(n1 = 0; n1<2;n1 ++){
        for(n2 = 0;n2<2;n2++){
            printf("(%d,%d) = ",n1,n2);
            scanf("%d",&tablaNumeros[n1][n2]);
        }
    }
    for(n1 = 0; n1<2;n1 ++){
        for(n2 = 0;n2<2;n2++){
            printf("(%d,%d) = %d\n",n1,n2,tablaNumeros[n1][n2]);
        }
    }
    getchar();
    //string
    printf("Ingrese la cadena de caracteres: ");
    gets(cadena);
    fflush(stdin);
    printf("%s",cadena);
}
