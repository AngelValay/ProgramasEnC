#include <iostream>
#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,vector[10];
    system("COLOR F3");
    for(i=0;i<10;i++){
        cout<<endl<<"Ingresa un numero: "; cin>>vector[i];
    }
    int mayor = vector[0];
    for(i=1; i<10; i++){
        if(vector[i]>mayor) mayor = vector[i];

    }
    cout <<"El MAXIMO es : "<< mayor<<endl<<endl;

    return 0;
}
