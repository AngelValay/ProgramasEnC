#include <stdlib.h>
#include <stdio.h>

#include <ctype.h>
#include <math.h>

int main() {
    char letra = 'a';
    printf("letra vale %c\n",letra);
    letra = toupper(letra);
    printf("letra vale %c\n",letra);
    printf("el resultado es %lf",pow(3,5));
    return 0;

}