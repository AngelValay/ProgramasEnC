#include <iostream>
using namespace std;
float lap,hojas,tarj,total;
int main (){
    cout<<"Ingresa el valor de la caja de lapices: ";
    cin>>lap;
    cout<<"  Ingresa el valor del paquetes de hojas: ";
    cin>>hojas;
    cout<<"  Ingresa el valor de la tarjeta de telefono: ";
    cin>>tarj;
    total = (lap+(hojas*3)+tarj-50);
    cout<<"El total a pagar es: "<<total;
    cout<<" con un descuento de 50";
    return 0;
}
