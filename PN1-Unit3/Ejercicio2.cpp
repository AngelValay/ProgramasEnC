#include <cstdio>

#define N 3
int main() {
    char nombres[N][50]={'\0'};
    char nombre[50]={'\0'};
    int x = 0;
    int y = 0;
    int guardarNombre = 0;
    while (true){
        if(guardarNombre){
            nombres[x][y] = nombre[y];
            y++;
            if(!nombre[y]){
                guardarNombre  = 0;
                x++;
                y = 0;
            }
            if(x>=N){
                break;
            }
        }else{
            printf("Dame un nombre: ");
            scanf(" %[^\n]*s",nombre);
            guardarNombre = 1;
        }
    }
    x = 0;
    y = 0;
    while (1){
        printf("%c ",nombres[x][y]);
        y++;
        if(nombres[x][y]){
            x++;
            y = 0;
            printf("\n");
        }
        if(x>=N){
            break;
        }
    }
    return 0;
}