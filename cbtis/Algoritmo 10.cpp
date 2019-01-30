#include <iostream>
using namespace std;
float pres,pago,presa;
int main ()
{
    cout<<"Ingresa la cantidad de prestamo: ";
    cin>>pres;
    presa = (pres+(pres*0.25));
    pago = presa/20;
    cout<<"El pago quincenal es de: "<<pago;
    return 0;
}
