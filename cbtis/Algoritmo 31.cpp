#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    float compra, pago;
    cout<<"Cuanto va a comprar ?  $"; cin >> compra;
    pago =compra;
    if((compra>=250)&&(compra<=400)) pago= compra *0.85;
    if((compra>400)&&(compra<=800)) pago= compra *0.85;
    if((compra>800)&&(compra<=1300)) pago= compra *0.85;
    if(compra>=1300) cout<<"Se lleva un 45% de mercancia"<<endl;
    cout <<"Total a pagar:  $"<<pago;
    return 0;

}
