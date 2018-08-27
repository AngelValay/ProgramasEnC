#include <stdio.h>


void ImprimeMatriz(int [][3], int, int*);

void mostrarNum(int *);

int main()
{
    int x=0,y=0;
    int matriz[3][3] = {{0},{0},{0}};

    printf("Introduzca los valores para la matriz\n");
    for (x=0; x<3; ++x)
    {
        for (y=0; y<3; ++y)
        {
            printf("Valor para el elemento [%d][%d]: ", x, y);
            scanf("%d",&matriz[x][y]);
        }
        printf("\n");
    }

    printf("Matriz\n");
    int m=3;
    int res=0;
    ImprimeMatriz(matriz, m,&res);
    mostrarNum(&res);
    return 0;
}

void ImprimeMatriz(int m[][3], int filas,int *res)
{   printf("%d",*res);
    int i=0,j=0;

    for (i=0; i<filas; ++i)
    {
        for (j=0; j<3; ++j)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    int n=5;
    int r=6;
    *res=n*r;
}


void mostrarNum(int *res){
    printf("%d",*res);
}