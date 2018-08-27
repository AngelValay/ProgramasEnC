#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int n[3];
    int i;
    int aux =0;
    for(i=0; i<3;i++){
        cout <<"Teclea un numero: "<<endl; cin >>n[i];
    }
    for(i=0; i<3; i++){
        if(n[i]>aux){
            aux = n[i];
        }
    }
    cout<<"El Numero Maximo es : "<<aux;
    return 0;
}
