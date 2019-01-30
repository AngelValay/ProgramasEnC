#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

#define MAX 11

float total;

int I;
long  n;

void val()
{
    cout<<"Validando.";
        for(I=1;I<=6;I++){
        cout<<".";
        if(I>4) Sleep (400);
        Sleep (100);


        }cout<<"."<<endl;
}

int main()
{
    int cant[MAX];

    for(int i = 1;i<=MAX; i++){


       if (i=1) {cout<<"Ingresa las cantidades de cada uno de los billetes: "<<endl; cout<<"1000: "; cin>>cant[i];val();}
       if (i=2) {cout<<"500: "; cin>>cant[i];val();}
       if (i=3) {cout<<"200: "; cin>>cant[i];val();}
       if (i=4) {cout<<"100: "; cin>>cant[i];val();}
       if (i=5) {cout<<"50: "; cin>>cant[i];val();}
       if (i=6) {cout<<"20: "; cin>>cant[i];val();cout<<"=============================================================="<<endl;}
       if (i=7) {cout<<"Ingresa las cantidades de cada una de las monedas: "<<endl; cout<<"10: "; cin>>cant[i];val();}
       if (i=8) {cout<<"5: "; cin>>cant[i];val();}
       if (i=9) {cout<<"2: "; cin>>cant[i];val();}
       if (i=10) {cout<<"1: "; cin>>cant[i];val();}
       if (i=11) {cout<<"0.50: "; cin>>cant[i];val();}

    }
    system("cls");

    n = (cant[1]*1000)+(cant[2]*500)+(cant[3]*200)+(cant[4]*100)+(cant[5]*50)+(cant[6]*20)+(cant[7]*10)+(cant[8]*5)+(cant[9]*2)+(cant[10])+(cant[11]/2);

    cout<<"Total existencia: $"<<n;

    return 0;
}











