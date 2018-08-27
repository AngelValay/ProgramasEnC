#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void gotoxy (int x, int y)
{
    HANDLE hCon ;
    COORD dwPos;

    dwPos.X = x ;
    dwPos.Y = y ;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

void pintar(){

    for (int i = 12; i < 65; i++){
        gotoxy (i,2); printf ("%c",219);
        gotoxy (i,22); printf ("%c",219);

    }
    for (int i = 3; i < 23; i++){
        gotoxy (12,i); printf ("%c",219);
        gotoxy (64,i); printf ("%c",219);
    }

}

void pintar_opcion(){

    for (int i = 20; i < 27; i++){
        gotoxy (i,15); printf ("%c",205);
        gotoxy (i,17); printf ("%c",205);

    }
    for (int i = 16; i < 17; i++){
        gotoxy (20,i); printf ("%c",186);
        gotoxy (27,i); printf ("%c",186);
    }
    gotoxy (20,15); printf ("%c",201);
    gotoxy (27,15); printf ("%c",187);
    gotoxy (20,17); printf ("%c",200);
    gotoxy (27,17); printf ("%c",188);

}


void menu(){

    gotoxy(20,8);
    cout<<"1 => Numeros Consecutivos";
    gotoxy(20,9);
    cout<<"2 => Numeros Pares";
    gotoxy(20,10);
    cout<<"3 => Numeros Impares";
    gotoxy(20,11);
    cout<<"4 => Numeros Cuadrados";
    gotoxy(20,12);
    cout<<"5 => Numeros Cubos";
    gotoxy(20,13);
    cout<<"6 => Salir";

}

int consecutivos(){
    int suma,cant;
    gotoxy(25,5);
    cout<<"De 1 a ";
    cin>>cant;
    suma=(cant*(cant+1))/2;
    gotoxy(15,10);
    cout<<"La suma de los numeros consecutivos de 1 a "<<cant;
    gotoxy(15,11);
    cout<<"es "<<suma;
}
int pares(){
    int suma,cant;
    gotoxy(25,5);
    cout<<"De 1 a ";
    cin>>cant;
    suma=cant*(cant+1);
    gotoxy(15,10);
    cout<<"La suma de los numeros pares de 1 a "<<cant;
    gotoxy(15,11);
    cout<<"es "<<suma;
}
int impares(){
    int suma,cant,n;
    gotoxy(25,5);
    cout<<"De 1 a ";
    cin>>cant;
    n=(cant+1)/2;
    suma=n*n;
    gotoxy(15,10);
    cout<<"La suma de los numeros impares de 1 a"<<cant;
    gotoxy(15,11);
    cout<<"es "<<suma;
}
int cuadrados(){
    int suma,cant;
    gotoxy(25,5);
    cout<<"De 1 a ";
    cin>>cant;
    suma=(cant*((cant+1)*((2*cant)+1))/6);
    gotoxy(15,10);
    cout<<"La suma de cuadrados de los "<<cant;
    gotoxy(15,11);
    cout<<"primeros numeros naturales consecutivos es: ";
     gotoxy(15,12);
    cout<<suma;

}
int cubo(){
    int suma,cant;
    gotoxy(25,5);
    cout<<"De 1 a ";
    cin>>cant;
    suma=(cant*((cant+1)*(cant+2))/6);
    gotoxy(15,10);
    cout<<"La suma de cubos de los "<<cant;
    gotoxy(15,11);
    cout<<"primeros numeros";
    gotoxy(15,12);
    cout<<"naturales consecutivos es: "<<suma;
}


int main ()
{
    int opcion;

    do{
    system("COLOR F3");
    pintar();
    gotoxy(17,4);
    cout<<"=====SUMATORIA DE LOS PRIMEROS n NUMEROS====="<<endl;
    menu();
    pintar_opcion();
    gotoxy(23,16);
    cin>>opcion;

    system("cls");
    pintar();

    switch(opcion){
    case 1:
        system("COLOR A1");
        consecutivos(); break;
    case 2:
        system("COLOR A2");
        pares(); break;
    case 3:
        system("COLOR A3");
        impares(); break;
    case 4:
        system("COLOR A4");
        cuadrados(); break;
    case 5:
        system("COLOR A5");
        cubo(); break;
    case 6:
        system("COLOR B6");
        break; EXIT_SUCCESS;
    default:
        system("cls");
        cout<<"Error. No tecleastes ninguna de las opciones"<<endl;
        break;
    }

   gotoxy(15,19);
   system("pause (null)");

   system("cls");

   }while(opcion<6);


    return 0;
}
