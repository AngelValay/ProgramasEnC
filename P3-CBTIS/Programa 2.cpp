//¿Que signo eres ?

#include <iostream>
#include <windows.h>

//PROBLEMA CON GOTOXY
#ifndef GOTOXY_H
#define GOTOXY_H

using namespace std;

int dia , mes ;

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;
    //Esto es para no tener que compilar en el pinche borlandc o el turboc
    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}
#endif

void val( )

{

    int V=0;

    cout<<"Validando";
    for(V= 1;V<8;V++){
        cout<<".";
        Sleep(20+25);
    }cout<<"."<<endl;
    cout <<" "<<endl;
    system("cls");


}
int main()
{
    system("COLOR CA");
    int i =0;
    int op=0;
    //Validar Entrada
    do{
    cout<<"Deseas Iniciar? SI=1, NO=0"<<endl;
    cin>> op;
    val();
    system("cls");
    }while((op!=1)&&(op!=0));

    while(op==1){
    cout << "Teclea tu dia de nacimiento: "; cin>> dia;
    val();
    cout <<"Teclea Tu mes de nacimiento: "; cin >> mes;
    val();
    system("cls");

    if((dia>0)&&(dia<=31)&&(mes>0)&&(mes<13)){
    if(((dia>=21)&&(mes==3)||(dia<=20)&&(mes==4))) {gotoxy(35,1);cout <<"Eres Aries"<<endl<<endl;}
    if(((dia>=21)&&(mes==4)||(dia<=20)&&(mes==5))) {gotoxy(35,1);cout <<"Eres Tauro"<<endl<<endl;}
    if(((dia>=21)&&(mes==5)||(dia<=20)&&(mes==6))) {gotoxy(35,1);cout <<"Eres Geminis"<<endl<<endl;}
    if(((dia>=21)&&(mes==6)||(dia<=20)&&(mes==7))) {gotoxy(35,1);cout <<"Eres Cancer"<<endl<<endl;}
    if(((dia>=21)&&(mes==7)||(dia<=20)&&(mes==8))) {gotoxy(35,1);cout <<"Eres Leo"<<endl<<endl;}
    if(((dia>=21)&&(mes==8)||(dia<=20)&&(mes==9))) {gotoxy(35,1);cout <<"Eres Virgo"<<endl<<endl;}
    if(((dia>=21)&&(mes==9)||(dia<=20)&&(mes==10))) {gotoxy(35,1);cout <<"Eres Libra"<<endl<<endl;}
    if(((dia>=21)&&(mes==10)||(dia<=20)&&(mes==11))) {gotoxy(35,1);cout <<"Eres Escorpion"<<endl<<endl;}
    if(((dia>=21)&&(mes==11)||(dia<=20)&&(mes==12))) {gotoxy(35,1);cout <<"Eres Sagitario"<<endl<<endl;}
    if(((dia>=21)&&(mes==12)||(dia<=20)&&(mes==1))) {gotoxy(35,1);cout <<"Eres Capricornio"<<endl<<endl;}
    if(((dia>=21)&&(mes==1)||(dia<=20)&&(mes==2))) {gotoxy(35,1);cout <<"Eres Acuario"<<endl<<endl;}
    if(((dia>=21)&&(mes==2)||(dia<=20)&&(mes==3))) {gotoxy(35,1);cout <<"Eres Piscis"<<endl<<endl;}
    }
    if((dia<0)||(dia>31)||(mes<0)||(mes>=13)){
            for(i=1;i<=15;i++){
        cout <<"=====================================ERROR================================="<<endl;
        Sleep(50);}
    }
    system("pause");
    system("cls");
    //Validar Salida
    do{
    cout<<"Deseas Iniciar? SI=1, NO=0"<<endl;
    cin>> op;
    val();
    system("cls");
    }while((op!=1)&&(op!=0));
    }
    return 0;

}
