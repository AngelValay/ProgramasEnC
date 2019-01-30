#include <stdio.h>
#include <stdlib.h>

int main(){
    bool p;
    bool q;
    //OPERADOR AND
    p = 0;
    q = 0;
    printf(" --------------TABLA DE VERDAD \"AND\"------------");
    printf("\n _______________________________________________");
    printf("\n|\tp\t|\tq\t|      p&&q\t|");
    printf("\n|_______________|_______________|_______________|");
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p&&q);
    p = 0;
    q = 1;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p&&q);
    p = 1;
    q = 0;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p&&q);
    p = 1;
    q = 1;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p&&q);
    printf("\n|_______________|_______________|_______________|\n\n");
    //OPERADOR OR
    p = 0;
    q = 0;
    printf(" --------------TABLA DE VERDAD \"OR\"------------");
    printf("\n _______________________________________________");
    printf("\n|\tp\t|\tq\t|      p||q\t|");
    printf("\n|_______________|_______________|_______________|");
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p||q);
    p = 0;
    q = 1;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p||q);
    p = 1;
    q = 0;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p||q);
    p = 1;
    q = 1;
    printf("\n|\t%d\t|\t%d\t|\t%d\t|",p,q,p||q);
    printf("\n|_______________|_______________|_______________|\n");
    //OPERADOR NOT
    p = 0;
    q = 0;
    printf("\n -----TABLA DE VERDAD \"NOT\"------");
    printf("\n _______________________________");
    printf("\n|\tp\t|\t!p\t|");
    printf("\n|_______________|_______________|");
    printf("\n|\t%d\t|\t%d\t|",p,!p);
    p = 1;
    printf("\n|\t%d\t|\t%d\t|",p,!p);
    printf("\n|_______________|_______________|\n");
}
