#include <stdlib.h>
#include <stdio.h>

int main(){
    int n1,n2,n3;
    n1=25,n2=50,n3=15;
    printf("%d, %d, %d",n1,n2,n3);
    if(n1>n2){
        if(n1>n3){
            printf("\nn1 es el mayor");
        }else{
            printf("\nn3 es el mayor");
        }
    }else{
        if(n2>n3){
            printf("\nn2 es el mayor");
        }else{
            printf("\nn3 es el mayor");
        }
    }
}
