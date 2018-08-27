#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main(){
    srand(time(0));
    int matriz[3][4] = {0};
    int x = 0;
    int y = 0;
    int z = 0;
    int w = 0;
    int ban = 0;
    int ran = 1 + rand()%(30-1);
    for(;;){
        //printf("Entra %d %d\n",x,y);
        //Sleep(500);
        ran = 1 + rand()%(30-1);
        matriz[x][y] = ran;
        ban = 0;
        do{
           for(z = 0;z < x; z++){
                for(w = 0;w <= y;w++){
                    //printf("(%d,%d) -> %d == (%d,%d) -> %d \n",z,w,matriz[z][w],x,y,matriz[x][y]);
                    if(matriz[z][w] == matriz[x][y]){
                        ran = 1 + rand()%(30-1);
                        matriz[x][y] = ran;
                        ban = 1;
                    }else{
                        ban = 0;
                    }
                }
            }
        }while(ban);

        x++;
        if(x >= 3){
            x = 0;
            y++;
        }

        if(y >= 4){
            break;
        }
    }
    x = 0;
    y = 0;
    for(;;){
        printf("%d\t",matriz[x][y]);
        x++;
        if(x >= 3){
            printf("\n");
            x = 0;
            y++;
        }

        if(y >= 4){
            break;
        }
    }
}
