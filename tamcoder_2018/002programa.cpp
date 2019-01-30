#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int N;
    int n = 0;
    int o = 0;
    int p = 0;
    int cont = 0;
    scanf("%i ",&N);
    char nombres[N][1024];
    do{
        strncpy(nombres[n], "", sizeof(nombres[n]));
        scanf(" %[^\n]",nombres[n]);
        n++;
    }while(n < N);

    char aux[1024] = {0};
    n=0;
    p = 0;
    int ban = 0;
    for(n=1; n<N-1; n++){
        ban = 0;
        for(o = 1; o<N-1;o++){
            if((strcmp(nombres[o],nombres[o+1]) > 0)){
                ban = 1;
                strcpy(aux,nombres[o]);
                strcpy(nombres[o], nombres[o+1]);
                strcpy(nombres[o+1], aux);
            }
        }
        if(ban == 1)
            cont ++;
    }
    printf("%d",cont);
    return 0;
}
