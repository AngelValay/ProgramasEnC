#include <stdio.h>
#include <stdlib.h>

int main(){
    float promGeneral = 0;
    float promGrupal;
    float promPorAlumno;
    int banPregunta;
    int banGrupal;
    int cantAlu;
    int cantGrupos = 0;
    promGeneral = 0;
    for(;;){
        banPregunta = 0;
        banGrupal = 0;
        promGrupal = 0;
        do{
            int contAlu;
            printf("Cantidad de alumnos que estan en este grupo: ");
            scanf("%d",&cantAlu);
            for(contAlu = 1; contAlu <=cantAlu; contAlu++){
                //printf("%d\n",contAlu);
                int contCal;
                float cal;
                promPorAlumno = 0;
                for(contCal = 1;contCal <= 3;contCal++){
                    do{
                        printf("%d calificacion del %d alumno: ",contCal,contAlu);
                        scanf("%f",&cal);
                        if(cal<0 || cal>10)
                            printf("Calificacion no valida. Vuelva a intentarlo.\n");
                        else
                            break;
                    }while(true);
                    promPorAlumno+=cal;
                }
                promPorAlumno /=3 ;
                printf("El promedio del %d alumno fue: %0.2f\n",contAlu,promPorAlumno);
                promGrupal+=promPorAlumno;
            }
            //printf("%f\n",promGrupal);
            //printf("%d\n",cantAlu);
            promGrupal/=cantAlu;
            printf("El promedio del grupo fue: %0.2f\n",promGrupal);
            promGeneral+=promGrupal;
            cantGrupos++;
            //printf("Grupos: %d\n",cantGrupos);
            //printf("La suma actual de los grupos es: %0.2f\n",promGeneral);
            system("pause");
            system("cls");
            while(true){
                printf("Deseas agregar mas grupos (1-SI, 0-NO):");
                scanf("%d",&banPregunta);
                system("cls");
                int banAux = 0;
                switch(banPregunta){
                    case 0:
                    case 1:
                        banAux = 1;
                        break;
                    default:
                        printf("Entrada invalida.\n");
                }
                if(banAux){
                    banGrupal = 1;
                    break;
                }
            }
            if(banGrupal)
                break;
        }while(1);
        if(!banPregunta)
            break;

    }

    promGeneral/=cantGrupos;
    printf("El promedio de todos los grupos fue: %0.2f",promGeneral);
}
