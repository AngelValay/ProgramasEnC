/*uso de vectores*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//PROBLEMA CON GOTOXY

#ifndef GOTOXY_H
#define GOTOXY_H

int backcolor=0;

void textcolor( int color)
{
        static HANDLE hConsole;

        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

        SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );
}

int color[7] = {
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F

     };


void mensaje_inicio(){


	Sleep(60*10);
	textcolor(color[1]);
	cout<<"BIENVENIDO ";
	Sleep(60*5);
	textcolor(color[2]);
	cout<<" USUARIO";
	Sleep(60*5);
	textcolor(color[3]);
    cout<<" ES";
	Sleep(60*5);
	textcolor(color[4]);
	cout<<" HORA.. ";
	Sleep(60*10);
	system("cls");
}
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

int def , suma;

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


int main ()

{
    gotoxy(27,10);
    mensaje_inicio();
    system("COLOR 52" );
    int j=0, aux=0;
    int i =0;
    int x=5;
    cout << "Capacidad del vector"<<endl;
    gotoxy(3,1);
    cin >> def;
    val();
    int vectors [def];
    for(i = 0; i<def; i++ ){
        cout << "ingresa un valor al vector "<<endl;

        cin>>vectors[i];
        val();
    }
    cout<<"  "<<endl<<endl;

    system("pause(null)");

    system("cls");
    system ("COLOR 3B");

    for(i=0; i<(def-1); i++) {

     for (j=i+1; j<def; j++) {

        if(vectors[j]<vectors[i]) {

            aux=vectors[j];
            vectors[j]=vectors[i];
            vectors[i]=aux;

        }
     }
  }



    cout<<"El vector ordenado es:"<<endl;
    for (i=0; i<def; i++){
         cout<<vectors[i]<<endl;
    }
    cout<<"  "<<endl<<endl;

    for (i = 0; i <def; i++){
        suma += vectors[i];

    }
    cout<<"La suma de los vectores es: "<< suma<<endl<<endl;
    system("pause");
    cout<<endl;
    system("cls");
    system("COLOR 4");

    int candidato = vectors[0];
    int candidato1 = vectors[0];


    for(i=0; i<def; i++){
        if(vectors[i]>candidato){
            candidato = vectors[i];
        }
    }
    cout <<"El MAXIMO es : "<< candidato<<endl<<endl;
    system ("pause(null)");
    system("COLOR A2");
    cout<<endl;

    for(i=0; i<def; i++){
        if(vectors[i]<candidato1){
            candidato1 = vectors[i];
        }
    }
    cout <<"El MINIMO es : "<< candidato1<<endl;
    system("pause(null)");
    int op1, num, pos,band;
    do{
    cout<<endl<<"Deseas Buscar Un numero: SI=1, NO=0"<<endl; cin>>op1;
    if(op1!=1)break;
    cout<<"Numero a buscar"<<endl;
    cin>>num;
    for(int i =0; i<def;i++){
        if(num==vectors[i]){
                pos=i;band=1;i=10;
        }
    }
    if(band!=1) cout<<"No existe el elemento"<<endl;
    cout<<"Deseas continuar? SI=1 NO=0"<<endl; cin>>op1;
    }while(op1==1);



    return 0;
}

