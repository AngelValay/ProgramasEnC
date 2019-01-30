#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia;
    printf("Ingresa el dia de la semana");
    scanf("%d",&dia);
    if(dia==1){
        printf("Es lunes");
    }else{
        if(dia==2){
            printf("Es martes");
        }else{
            if(dia==3){
                printf("Es miercoles");
            }else{
                if(dia==4){
                    printf("Es jueves");
                }else{
                    if(dia==5){
                        printf("Es viernes");
                    }else{
                        if(dia==6){
                            printf("Es sabado");
                        }else{
                            if(dia==7){
                                printf("Es domingo");
                            }else{
                                printf("No corresponde");
                            }
                        }

                    }
                }
            }
        }
    }1
}
