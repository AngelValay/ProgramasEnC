
#include <fstream>
#include <iostream>
#include <ctype.h>
using namespace std;
#define PATH "C:\\Users\\angel\\Desktop\\text.txt"
void cantLin(int *, char *, string);
void cantCar(int *a,char *);
void printfTxt(char *,char *);
void formTxt(char *,char *);
void convertLowerTxt(char *,char *);
int main() {
    FILE *file;
    char c;
    int cC = 0;     //CONTADOR DE CARACTERES
    int cL = 0;     //CONTADOR DE LINEAS

    cantCar(&cC,PATH);
    printf ("%s contains %d \n",PATH,cC);
    char car[cC];
    cantLin(&cL,PATH,car);
    printf("%s contains lines %d \n",PATH,cL);
    printf("The text of %s is:\n",PATH);
    printfTxt(PATH,car);
    printf("%s",car);
    char newCar[cC];
    convertLowerTxt(car,newCar);
    //car* = NULL;
    char newCar2[cC];
    formTxt(newCar,newCar2);
    //printf("\nNew Format Text:\n%s",newCar2);
    char newCar3[cC];
    formTxt(newCar2,newCar3);
    printf("\nNew Format Text 2:\n%s",newCar3);
    return 0;

}
void cantLin(int *a,char *path,string line){
    ifstream in(path);
    while(getline(in, line))
        *a  = *a + 1;
}
void cantCar(int *a,char *path){
    FILE *file = fopen(path, "r");
    int n = 0;
    char c;
    if (file==NULL)
        printf ("Error reading file");
    else{
        do {
            c = getc (file);
            n++;
        } while (c != EOF);
        fclose (file);
    }
    *a = n;
}
void printfTxt(char *path,char *strg){
    FILE *file = fopen(path, "r");
    char c;
    int  i = 0;
    int cantCaracteres;
    cantCar(&cantCaracteres,path);
    if (file==NULL)
        printf ("Error reading file");
    else{
        do {
            c = getc (file);
            strg[i] = c;
            i ++;
            //printf("%c",c);
        } while (c != EOF);
        //printf("%s",str);
        fclose (file);
    }
}
void convertLowerTxt(char *origen,char *destino){
    for (int i = 0; origen[i]; ++i) {
        destino[i] = (char) tolower(origen[i]);
    }
}
void formTxt(char *origen, char *destino){
    int limAux=0;
    for (int i = 0; origen[i]; ++i) {
        if (!(islower(origen[i]) || isspace(origen[i])) || (isspace(origen[i]) && (isspace(origen[i+1])))){
            //printf("\nThis character \"%c\" in position %d is not allowed",origen[i],i+1);
        }else{
            destino[limAux] = origen[i];
            limAux++;
        }
    }
}











