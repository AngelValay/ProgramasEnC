#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n3;
    n1=1,n2=10,n3=10;
    printf("%d, %d, %d",n1,n2,n3);
    if(n1==n2)
        if(n2==n3)
            printf("\n%d, %d, %d son iguales 1",n1,n2,n3);
        else
            if(n2>n3)
                printf("\n%d, %d, son mayores que %d 2",n1,n2,n3);
            else
                printf("\n%d es mayor que %d y %d 3",n3,n1,n2);
    else
        if(n1>n2)
            if(n2==n3)
                printf("\n%d es mayor que %d y %d 4",n1,n2,n3);
            else
                if(n2>n3)
                    printf("\n%d es el mayor 5",n1);
                else
                    if(n1>n3)
                        printf("\n%d es el mayor 6",n1);
                    else
                        if(n1==n3)
                            printf("\n%d y %d es  mayor que %d 7",n1,n3,n2);
                        else
                            printf("\n%d es el mayor 8",n3);


        else
            if(n2==n3)
                printf("\n%d y %d es mayor que %d", n2, n3, n1);
            else
                if(n2<n3)
                    printf("\n%d es el mayor 10",n3);
                else
                    printf("\n%d es el mayor 11",n2);
    return 0;
}
