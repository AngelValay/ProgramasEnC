#include <iostream>
#include <windows.h>

using namespace std;
float mes,din;
int main()
{
    cout<<"PRESTAMEX S.A C.V"<<endl<<endl;
    cout<<"Teclea Tu Ingreso Mensual :  $"; cin>> mes;
    if((mes<1000)||(mes>=5000)) din =0;
    if((mes>=1000)&&(mes<=1500)) din = (mes*12)*0.10;
    if((mes>1500)&&(mes<=2500)) din = (mes*12)*0.12;
    if((mes>2500)&&(mes<=4000)) din = (mes*12)*0.14;
    if((mes>4000)&&(mes<=5000)) din = (mes*12)*0.16;
    cout<<"Cantidad Maxima que se puede prestar:  $"<<din<<endl;
    return 0;
}
