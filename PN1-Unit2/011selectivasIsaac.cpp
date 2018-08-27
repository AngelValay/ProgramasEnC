#include <iostream>

int main() {
    int n1,n2,n3;
    n1=1,n2=15,n3=15;
    printf("%d, %d, %d",n1,n2,n3);
    if (n1>n2 && n1>n3)
        printf("\n%d es el mayor ", n1);
    else
        if (n2>n3)
            printf("\n%d es el mayor ", n2);
        else
            if (n3>n2)
                printf("\n%d es el mayor ",n3);

    if (n1==n2 && n1==n3)
        printf("\nLos tres numeros son iguales");
    else
        if (n1==n2)
            printf("\nn1 y n2 son iguales");
        else
            if (n1==n3)
                printf("\nn1 y n3 son iguales");
            else
                if (n3==n2)
                    printf("\nn2 y n3 son iguales");
    return 0;
}
