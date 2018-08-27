#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int I;
    int num, c=0;
    for(I=1;I<=10;I++){
        cout<<"Teclea un numero:  "; cin >> num;
        if(num>20)c++;

    }
    cout<<"Total de numeros mayores a 20: "<<c;
    return 0;
}
