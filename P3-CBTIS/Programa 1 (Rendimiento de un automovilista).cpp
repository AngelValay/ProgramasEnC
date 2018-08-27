#include <iostream>
#include <windows.h>

using namespace std;

#ifndef GOTOXY_H
#define GOTOXY_H

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

int main()
{
    float km, total, precio, pre;
    system("COLOR 4E");
    cout<<"Teclea Los Km Recorridos: "<<endl;
    gotoxy(2,1);
    cin >> km;
    gotoxy ( 1,2);
    val();
    cout<<"Teclea el Precio x litro de Gasolina: " <<endl;
    gotoxy(2,1);
    cin>>pre;
    gotoxy (1,2);
    if(( km>=1 )&&(km<=300)) total= km/7;
    if((km>=301)&&(km<=500)) total = km/8;
    if((km>=501)&&(km<=600)) total = km/9;
    if((km>=601)&&(km<=900)) total = km/10;
    if(km>=901) total = km/11;
    precio = total * pre;

    system("cls");
    system("COLOR 4A");
    gotoxy (1,1);
    cout <<"Los litros que vas a gastar: ";
    gotoxy (4,2);
    cout<<total<<" Lt"<< endl;
    gotoxy (1,3);
    cout <<"El redimiento es de :";
    gotoxy (4,4);
    cout<<"$ "<<precio<<endl;
    gotoxy(1,5);
    return 0;

}
