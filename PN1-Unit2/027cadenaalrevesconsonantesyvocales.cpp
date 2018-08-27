#include<stdio.h>
#include<stdlib.h>

int main(){
    char input[20];
    char inputRes[20];
    int i =0;
    int a=0;
    int index;
    int corteString=0;
    int contVocal=0;
    int contCons=0;
    printf("Dame tu nombre: ");
    scanf("%[^\n]",input);
    printf("%s\n",input);
    for(a=0;input[a];a++){
        index = a;
        if(input[a]=='A' || input[a]=='E' || input[a]=='I' || input[a]=='O'
           || input[a]=='U' || input[a]=='a' || input[a]=='e' || input[a]=='i'
           || input[a]=='o' || input[a]=='u'){
           contVocal ++;
        }else{
            if((input[a]>='A' && input[a]<='Z') || (input[a]>='a' && input[a]<='z'))
                contCons++;
        }
        printf("%c = %d\n",input[a],input[a]);
    }
    printf("fuera del ciclo: a = %d\n",a);

    //al reves
    //printf("Input = ");
    for(int b=index,i=0;b>=0;b--,i++){
        inputRes[i] = input[b];

    }
    printf("\n");
    printf("Consonantes: %d\n",contCons);
    printf("Vocales: %d",contVocal);

}
