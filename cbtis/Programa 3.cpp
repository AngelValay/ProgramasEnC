#include <iostream>
#include <windows.h>
#include <math.h>

#define PI 3.1416

using namespace std;

void area()
{
    float rd, res;
    cout<<"Teclea el radio de un circulo: ";  cin>>rd;
    res = PI * (rd*rd);
    cout <<"El area del circulo es : "<<res<<endl;
}
void pro()
{
    int i;
    float pr, suma=0, prm=0;
    for(i=1; i<6; i++){
        cout <<"Teclea un precio :  "; cin >> pr;
        suma+=pr;
    }
    prm =suma/5;
    cout<<"El promedio de los precios es : "<<prm;
}
void per()
{
    float p, l;
    cout<<"Teclea el lado de un hexagono: "; cin>>p;
    l= p*6;
    cout<<"El perimetro del hexagono es : "<<l;

}
int main (){
    int opc;
    cout<<"MENU DE OPCIONES"<<endl;
    cout<<"  1=  Area de un circulo"<<endl;
    cout<<"  2=  Promedio de 5 precios"<<endl,
    cout<<"  3=  Perimetro  de un hexagono"<<endl;
    cin>>opc;
    switch (opc)
    {
        case 1: area();break;
        case 2: pro(); break;
        case 3: per(); break;
        default: cout <<"ERROR"<<endl;
    }
    return 0;
}
