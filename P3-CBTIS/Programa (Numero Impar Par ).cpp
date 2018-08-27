#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
int main(){
    int may, men=32767, i, cant, num;
    printf("Teclea la cantidad de numeros: "); scanf("%d",&cant);

    for(i=0;i<cant;i++){
        printf("\n Teclea un numero \n"); scanf("%d",&num);
        if(num%2==0){
                may=num;
            if(num<may) may=num;
        } else {
            if(men>num) men=num;
        }
    }

    printf("El valor mayor par es %d",may);
    printf("\n El valor menor non es %d",men);
    getch();
}
