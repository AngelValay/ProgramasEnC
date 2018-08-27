#include <iostream>
#include <windows.h>
using namespace std;
int K,A,total,I;
float desc, pago;
int main()
{
    for (K=1;K<=4;K++){
        cout<<"Ingresa el precio del articulo: $"; cin>>A;
        cout<<"Validando.";
        for(I=1;I<=6;I++){
        cout<<".";
        Sleep (1000);

        }cout<<"."<<endl;
        total += A;
    }
    if ( total < 200 ){
        desc = total * 0.10;
    } else {
        desc = total * 0.20;
    }
    pago = total - desc;
    cout<<"Total A pagar: $"<<pago;
}
