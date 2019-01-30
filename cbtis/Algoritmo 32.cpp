#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int n;
    cout<<"Teclea el numero de mes: "; cin >>n;
    switch(n){
    case 1:
        cout<<"Trimestre 1";
        break;
    case 2:
        cout<<"Trimestre 1";
        break;
    case 3:
        cout<<"Trimestre 1";
        break;
    case 4:
        cout<<"Trimestre 2";
        break;
    case 5:
        cout<<"Trimestre 2";
        break;
    case 6:
        cout<<"Trimestre 2";
        break;
    case 7:
        cout<<"Trimestre 3";
        break;
    case 8:
        cout<<"Trimestre 3";
        break;
    case 9:
        cout<<"Trimestre 3";
        break;
    case 10:
        cout<<"Trimestre 4";
        break;
    case 11:
        cout<<"Trimestre 4";
        break;
    case 12:
        cout<<"Trimestre 4";
        break;
    default :
        cout<<"ERROR INGRESASTE UN NUMERO INCORRECTO";
        break;

    }
    return 0;
}
