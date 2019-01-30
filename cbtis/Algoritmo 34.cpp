#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int n;
    cout<<"Teclea un numero: "; cin >> n;
    if(n>0) cout<<"Positivo "<<endl;
    if(n<0) cout<<"Negativo "<<endl;
    if(n=0) cout <<"Cero"<<endl;
    Sleep (1500);
    return 0;
}
