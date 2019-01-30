#include <stdio.h>
#include <stdlib.h>

int main(){

    int a           = 0;
    int b           = 0;
    int sumaEsq     = 0;
    int sumaNoEsq   = 0;
    int diag1       = 0;
    int diag2       = 0;
    int col         = 0;
    int filas       = 0;
    int banDiag     = 0;
    printf("Dame la cantidad de filas: ");
    scanf("%d",&filas);
    printf("Dame la cantidad de columnas: ");
    scanf("%d",&col);
    banDiag         = col==filas;
    int matriz[filas][col]={0};

    int sumaCol[col] ={0};
    int sumaFilas[filas]={0};
    int sumaPerimetro = 0;
    int j =0;
    int k = 0;
    int q = 0;

    for(j=0;j<filas;j++)
        for(k = 0;k<col;k++){
            matriz[j][k] = q;
            q++;
        }

    for(a = 0;a<filas;a++){
        for(b = 0;b<col;b++){
            sumaCol[b] +=matriz[a][b];
            sumaFilas[a]+=matriz[a][b];
            if(banDiag)
                if(a==b)
                    diag1 += matriz[a][b];
            if((a==0 && b==0) || (a==(filas-1) && b==0) || (a==0 && b==(col-1)) || (a==(filas-1) && b==(col-1)))
                sumaEsq+=matriz[a][b];
            else
                sumaNoEsq+=matriz[a][b];
            if(((a==0) && b!=0 && b!=(col-1)) ||
                ((b==0) && a!=0 && a!=(filas-1))||
                ((a==filas-1) && b!=0 && b!=(col-1)) ||
                ((b==col-1) && a!=0 && a!=(filas-1)))
                sumaPerimetro += matriz[a][b];
        }
        if(banDiag)
            diag2 +=matriz[a][b-a-1];
    }
    int i=0;

    for(int x = 0;x<filas;x++){
        for(int y= 0;y<col;y++){
            printf("%5d",matriz[x][y]);
        }
        printf("\n");
    }

    for(i = 0;i<col;i++){
        printf("Col: %d, suma =%d\n",i,sumaCol[i]);
    }
    for(i =0; i<filas;i++){
        printf("Filas %d, suma = %d\n",i,sumaFilas[i]);
    }
    if(banDiag){
        printf("\nDiagonal 1 = %d",diag1);
        printf("\nDiagonal 2 = %d",diag2);
    }

    printf("\nSuma de esquinas = %d",sumaEsq);
    printf("\nSuma de las demas casillas = %d",sumaNoEsq);
    printf("\nSuma de perimetro sin esquinas = %d", sumaPerimetro);
}
