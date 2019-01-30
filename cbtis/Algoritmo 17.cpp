#include <iostream>
using namespace std;
int a,K,suma;
float prom;
int main()
{
        for (K=1;K<=15;K++){
        cout<<"Ingresa la temperatura minima: ";
        cin>>a;
        suma = suma + a;}
    prom = suma/15;
    cout<<"El promedio redondeado de las 15 temperaturas es: "<<prom;
    return 0;
}
