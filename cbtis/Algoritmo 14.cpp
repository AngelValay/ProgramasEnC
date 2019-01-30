#include <iostream>
using namespace std;
int main ()
{
    float canti, pago, costo;

    cout<<"Numero de computadoras: ";
    cin>>canti;
    cout<<"Ingresa el costo de computadoras: ";
    cin>>costo;
    if (canti < 5) pago = (canti * costo )* 0.875 ;
        else
    pago = (canti*costo)*0.80;

    cout<<"Pago de las computadoras: "<<pago;
    return 0;
}
