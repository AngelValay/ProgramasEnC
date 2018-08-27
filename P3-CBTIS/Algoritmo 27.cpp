#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    float renta, inter,llam, pago;
    cout <<"Teclea el precio de la renta:  $"; cin >>renta;
    cout <<"Teclea la cuota de internet:  $"; cin>> inter;
    float aum;
    aum = renta * 0.15;
    cout <<"Teclea las llamadas realizadas al extranjero: "; cin>>llam;
    if(llam<=100) pago = renta + aum + inter;
    if((llam>100)&&(llam<=125)) pago = renta + aum + inter + 25;
    if((llam>125)&&(llam<=150)) pago = renta + aum + inter + 50;
    if((llam>150)&&(llam<=175)) pago = renta + aum + inter + 75;
    if(llam>175) pago = renta + aum + inter + 100;
    cout <<"Total a pagar:  $"<<pago;
    return 0;

}
