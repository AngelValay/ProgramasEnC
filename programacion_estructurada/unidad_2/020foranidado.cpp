#include <stdio.h>
#include <stdlib.h>
#define VAL 5

int main(){
    int a=0,b=0;
    int ban=0;
    int ban2=0;
    a=1;
    printf("empieza los ciclos\n");
    for(;;){
        b = 1;
        ban = 0;
        for(;;){
            if(b>a){
                ban = 1;
                break;
            }
            printf("for interno: b=%d\n",b);
            b++;
        }
        if(ban){
            if(a>VAL)
                break;
        }
        a++;
        printf("for externo aa=%d\n",a);
    }
    printf("\nFuera del ciclo ufff!!");


}
