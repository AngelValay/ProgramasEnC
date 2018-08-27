#include <iostream>
using namespace std;
float cant,total;
int main ()
{
    cout<<"Cantidad de dinero que solicita: ";
    cin>>cant;
    total = cant * ( 1.08*1.08*1.08*1.08*1.08 );
    cout<<"Tiene que pagar mensualmente : "<<total;
    return 0;
}
