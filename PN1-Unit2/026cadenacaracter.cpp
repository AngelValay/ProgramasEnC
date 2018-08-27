#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[20];
    int index;

    printf("Dame tu nombre: ");
    gets(input);
    printf("Input = %s\n\n",input);

    for(index = 0; input[index];index++){
        printf("%c\t%d\n",input[index],input[index])  ;
    }
}
