#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    int i,j;
    cout<<"Teclea el inicio de la lista de numeros: "<<endl;
    cin>>i;
    cout<<"Teclea el fin de la lista:  "<<endl;
    cin>>j;
    system("cls");
    system("COLOR 90");
    for( /* ESPACIO IGNORADO */;i<=j;i+=1){
        cout<<i<<endl;
    }
    return 0;
}
