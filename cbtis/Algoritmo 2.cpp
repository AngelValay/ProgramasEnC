#include <iostream>
using namespace std;
float suma;
float cal,pro;
int main()
{
    for (int Z = 1; Z <=6; Z++)
    {
        cout<<"Ingresa un calificacion: ";
        cin>>cal;
        suma = suma + cal;
    }

    pro = (suma)/6;
    cout<<"Promedio: "<<pro;
    return 0;
}
