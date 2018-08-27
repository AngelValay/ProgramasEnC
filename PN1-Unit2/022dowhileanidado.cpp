#include <stdlib.h>
#include <stdio.h>

int main(){
    long int a;
    int b;
    int c;
    int d;
    int bandera1;
    bandera1=false;
    int bandera2;
    bandera2=false;
    int bandera3;
    bandera3=false;
    a=0;

    do{
        if(a>=50)
            break;
        a++;
        b=0;
        do{
            if(b>=50)
                break;
            b++;
            c=0;
            do{
                printf("|%d * %d * %d|= %d|\n",a,b,c,a*b*c);
                if(a== 25 && b==25 && c==25){
                    bandera1=true;
                    break;
                }
                if(c>=50)
                    break;
                c++;
            }while(true);
            if(bandera1){
                bandera2=true;
                break;
            }
        }while(true);
        if(bandera2)
            break;
    }while(true);
}
