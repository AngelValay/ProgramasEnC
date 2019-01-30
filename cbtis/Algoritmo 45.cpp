#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int edad,par,I,suma;
    int a=0,b=0,c=0,d=0,e=0;
    cout<<"     == 1-PRI"<<endl;
    cout<<"     == 2-PAN"<<endl;
    cout<<"     == 3-PRD"<<endl;
    cout<<"     == 4-PARTIDO VERDE"<<endl;
    cout<<"     == 5-MOVIMIENTO CIUDADANO"<<endl;
    for(I=1;I<=1200;I++){
        cin>>par;
        switch(par){
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        default :
            cout<<"No Ingresastes una opcion"<<endl;

    }}
    cout<<"     == "<<a<<" 1-Son de PRI"<<endl;
    cout<<"     == "<<b<<" 2-Son de PAN"<<endl;
    cout<<"     == "<<c<<" 3-Son de PRD"<<endl;
    cout<<"     == "<<d<<" 4-Son de PARTIDO VERDE"<<endl;
    cout<<"     == "<<e<<" 5-Son de MOVIMIENTO CIUDADANO"<<endl;
return 0;

}


