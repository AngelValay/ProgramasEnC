#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int numSinSigno;
    numSinSigno = 145;
    printf("numSinSigno:\t%u\n", numSinSigno);

    int numEntero;
    numEntero = -1566;
    printf("numEntero:\t%d\n", numEntero);
    printf("\t\t%i\n", numEntero);

    float numDec;
    numDec = 15.164;
    printf("numDec:\t\t%f\n", numDec);
    printf("\t\t%g\n", numDec); //AJUSTA


    double numDecG;
    numDecG = 154654.168977;
    printf("numDecG:\t%lf\n",numDecG);
    printf("\t\t%e\n",numDecG); //EXPONENCIAL

    char letra;
    letra = 'P';
    printf("letra:\t\t%c", letra);


}
