#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("El limite inferior de INT es : %i",INT_MIN);
    printf("\nEl limite superior de INT es: %i",INT_MAX);

    printf("\n\nEl limite inferior de CHAR es: %i",CHAR_MIN);
    printf("\nEl limite superior de CHAR es: %i",CHAR_MAX);

    printf("\n\nEl limite inferior de SHORT INT es: %i", SHRT_MIN);
    printf("\nEl limite superior de SHORT INT es: %i",SHRT_MAX);

    printf("\n\nEl limite inferior de LONG INT es: %i", LONG_MIN);
    printf("\nEl limite superior de LONG INT es: %i",LONG_MAX);

    printf("\n\nEl limite inferior de FLOAT es: %g",FLT_MIN);
    printf("\nEl limite superior de FLOAT es: %g",FLT_MAX);

    printf("\n\nEl limite inferior de DOUBLE es: %g",DBL_MIN);
    printf("\nEl limite superior de DOUBLE es: %g",DBL_MAX);



}
