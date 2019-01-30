#include <iostream>
#include <windows.h>

#include <conio.h>
#include <stdio.h>

#ifndef GOTOXY_H
#define GOTOXY_H




void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}
#endif
void val( )
{

    int V=0;
    printf("Por favor Espere Estamos Evaluando su encuesta");
    for(V= 1;V<8;V++){
        printf(".");
        Sleep(50+100);
    }
    printf("\n ");
    system("cls");


}

using namespace std;

int main ()
{
    int i, ed,cant,est,pro,a1=0,a2=0,a3=0,a4=0; int n=14;
    char nom[15];
    system("COLOR B2");
    cout<<"TECLEA LA CANTIDAD DE PERSONAS A ENCUESTAR: "; cin>>cant;system("cls");
    for(i=0;i<cant;i++){
        cout<<"Teclea tu nombre: "; cin>>nom;
        cout<<"Teclea tu edad :  "; cin>>ed;

        for(;;){
        for (int i = 2; i < 40; i++){
        gotoxy (i,3); printf ("%c",61);
        gotoxy (i,10); printf ("%c",61);
        }
        for (int i = 4; i < 10; i++){
        gotoxy (2,i); printf ("%c",124);
        gotoxy (39,i); printf ("%c",124);
        }
        system("COLOR 92");
        gotoxy(4,4);
        cout<<"Principal problema en la ciudad: ";
        gotoxy(4,5);
        cout<<"1-Basura";
        gotoxy(4,6);
        cout<<"2-Inseguridad";
        gotoxy(4,7);
        cout<<"3-Problema plurial";
        gotoxy(4,8);
        cout<<"4-Baches";
        gotoxy(4,9);
        cout<<"5-Otro problema";
        gotoxy(2,13);
        cout<<"Teclea una opcion: ";
        gotoxy(30,n);
        cout<<"\n"; cin>>pro;
        n++;
        if((pro>0)&&(pro<6))break;
        }
        system("cls");
        for(;;){
        for (int i = 2; i < 28; i++){
        gotoxy (i,3); printf ("%c",61);
        gotoxy (i,10); printf ("%c",61);
        }
        for (int i = 4; i < 10; i++){
        gotoxy (2,i); printf ("%c",124);
        gotoxy (27,i); printf ("%c",124);
        }
        gotoxy(4,4);
        system("COLOR D9");
        cout<<"===ESTADO CIVIL===";
        gotoxy(4,5);
        cout<<"1-Casado(a)";
        gotoxy(4,6);
        cout<<"2-Soltero(a)";
        gotoxy(4,7);
        cout<<"3-Divorciado(a)";
        gotoxy(4,8);
        cout<<"4-Viudo(a)";
        gotoxy(4,9);
        cout<<"5-Union Coyungal";
        gotoxy(2,13);
        cout<<"Teclea una opcion: ";
        gotoxy(30,n);
        cout<<"\n"; cin>>est;
        n++;
        if((est>0)&&(est<6))break;
        }
        system("cls");
        val();
        if((ed>17)&&(pro==1)) a1++;
        if(pro==2) a2++;
        if((est==1)&&(pro==4)) a3++;
        if((pro==3)||(pro==2)) a4++;
}
system("COLOR 79");
gotoxy(1,1); cout<<"Cantidad de personas ..."<<endl;
    gotoxy(3,2);
    cout<<"Mayores de edad que opinan que el problema 1 es el mayor: "<<a1<<endl;
    gotoxy(3,3);
    cout<<"Que opinaron que el problema 2 es el mayor : "<<a2<<endl;
    gotoxy(3,4);
    cout<<"Casadas que eligieron  el problema 4: "<<a3<<endl;
    gotoxy(3,5);
    cout<<"Casadas que eligieron  el problema 3 o el 2: "<<a4<<endl;
    system("pause");

    return 0;
}
