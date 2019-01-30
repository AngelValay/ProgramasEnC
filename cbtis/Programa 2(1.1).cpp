#include <stdio.h>
#include <windows.h>
int dia,mes;
main(){
    printf("Teclea tu dia de nacimiento: "); scanf("%d",&dia);

    printf("Teclea Tu mes de nacimiento: "); scanf ("%d",&mes);

    system("cls");

    if((dia>0)&&(dia<=31)&&(mes>0)&&(mes<13)){
    if((dia>=21)&&(mes==3)) printf ("Aries");
    if((dia<=20)&&(mes==4)) printf("Eres Aries");
    if(((dia>=21)&&(mes==4)||(dia<=20)&&(mes==5))) printf("Eres Tauro");
    if(((dia>=21)&&(mes==5)||(dia<=20)&&(mes==6))) printf("Eres Geminis");
    if(((dia>=21)&&(mes==6)||(dia<=20)&&(mes==7))) printf("Eres Cancer");
    if(((dia>=21)&&(mes==7)||(dia<=20)&&(mes==8))) printf("Eres Leo");
    if(((dia>=21)&&(mes==8)||(dia<=20)&&(mes==9))) printf("Eres Virgo");
    if(((dia>=21)&&(mes==9)||(dia<=20)&&(mes==10))) printf("Eres Libra");
    if(((dia>=21)&&(mes==10)||(dia<=20)&&(mes==11))) printf("Eres Escorpion");
    if(((dia>=21)&&(mes==11)||(dia<=20)&&(mes==12))) printf("Eres Sagitario");
    if(((dia>=21)&&(mes==12)||(dia<=20)&&(mes==1))) printf("Eres Capricornio");
    if(((dia>=21)&&(mes==1)||(dia<=20)&&(mes==2))) printf("Eres Acuario");
    if(((dia>=21)&&(mes==2)||(dia<=20)&&(mes==3))) printf("Eres Piscis");
    }

    system("pause");
    return 0;
}
