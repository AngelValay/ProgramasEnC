#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int cant, pz, total;
    cout<<"Teclea la cantidad de panes: "; cin >>cant;
    pz =0;
    if((cant>4)&&(cant<11)) pz =1;
    if((cant>10)&&(cant<16)) pz =2;
    if(cant >15) pz =4;
    total = cant + pz;
    cout<<"Panes a llevar: "<<total<<endl;
    system ("pause(null)");
    return 0;
}
