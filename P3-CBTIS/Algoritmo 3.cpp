#include <iostream>
using namespace std;
int precio,total;
int main()
{
    cout<<"Teclea el precio de un articulo: ";
    cin>>precio;
    total = (precio*10)/2;
    cout<<"Total a pagar: "<<total;
    return 0;
}
