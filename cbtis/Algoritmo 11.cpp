#include <iostream>
using namespace std;
float insc,mat,tras,seg,total;
int anos;
int main ()
{
    cout<<"Teclea la couta de inscripcion: "; cin>>insc;
    cout<<"Teclea el costo de material didactico: "; cin>>mat;
    cout<<"Teclea los anos de vida: "; cin>>anos;
    tras = insc * 0.05;
    seg = 50 * anos;
    total = insc + mat + tras + seg;
    cout<<"Total a pagar: "<<total<<endl;
    return 0;
}
