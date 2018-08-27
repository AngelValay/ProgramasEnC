#include <iostream>
using namespace std;
int A;
float prom,suma,cal;
int main ()
{
    for (A=1;A<=5;A++){
        cout<<"Dame una calificacion: ";
        cin>>cal;
        suma += cal;
    }
    prom = suma/5;
    cout<<"El promedio de las 6 calificaciones es: "<<prom;
    return 0;
}
