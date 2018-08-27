#include <iostream>
using namespace std;
int n, pago;
int tmp;
int main()
{
    cout<<"Teclea la cantidad de nieve en litros: "; cin>>n;
    if(n<2) tmp=35;
    if((n>=2)&&(n<=5)) tmp=32;
    if((n>=6)&&(n<=10)) tmp=29;
    if((n>=11)&&(n<=15)) tmp=26;
    if((n>=16)&&(n<=20)) tmp=23;
    if(n>20) tmp=21;
    pago = tmp*n;
    cout<<"Tu pago es de :  $"<<pago;
    return 0;
}
