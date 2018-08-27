#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    float pant,camis,zapa,suma,pago;
    cout<<"Teclea el precio del pantalon:  $"; cin >>pant;
    cout<<"Teclea el precio de la camiseta:  $"; cin>>camis;
    cout<<"Teclea el precio de los zapatos:  $"; cin >>zapa;
    suma =pant+camis+zapa;
    if(suma>600) pago = suma *0.75;
    else pago = suma;
    cout<<"Total A Pagar:  $"<<pago;
    return 0;
}
