#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    a=0,b=0,c=0;
    int bandera1=false;
    int bandera2=false;
    while(true){
        a=0;
        if(c>=50)
            break;
        while(true){
            b=0;
            if(a>=50)
                break;
            while(true){
                if(b>=50)
                    break;
                printf("%d, %d, %d \n",c,a,b);
                if(c==45 && a ==45 && b==45){
                    bandera1 = true;
                    break;
                }
                b++;
            }
            if(bandera1){
                bandera2=true;
                break;
            }
            a++;
        }
        if(bandera2)
            break;
        c++;
    }

}
