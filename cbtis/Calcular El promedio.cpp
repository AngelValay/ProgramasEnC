#include <iostream>
using namespace std;
int A, K;
float prom,suma,cal;
int main ()
{
    cout<<"Cuantas calificaciones vas a promediar? "; cin>>K;
    for (A=1;A<=K;A++){
        cout<<"Dame una calificacion: ";
        cin>>cal;
        suma += cal;
    }
    prom = suma/K;
    cout<<"El promedio de las _"<< K <<"_  calificaciones es: "<<prom;
    return 0;
}
