#include <iostream>
using namespace std;
int K;
float suma,precio,desc;
int main ()
{
    for (K=1;K<=8;K++)
    {
        cout<<"Ingresa el valor del articulo: ";
        cin>>precio;
        suma = suma+precio;
        }
    suma = suma*0.80;
    desc =suma*0.20;
    cout<<"Total a pagar: "<<suma;
    cout<<"  Con un decuento incluido de: "<<desc;
    return 0;
}
