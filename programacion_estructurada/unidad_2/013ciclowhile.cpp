#include <stdlib.h>
#include <stdio.h>

int main(){
    int a;
    a = 0;
    do{
        printf("%d\n",a);
        a++;
    }while(a<10);

    do{
        printf("%d\n",a);
        a--;
    }while(a>=0);
}
