#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    int Z,b,h,c=0,a;
    for(Z=1;Z<=500;Z++){
        cout<<"Teclea la base y la altura de un triangulo: ", cin>>b>>h;
        a = (b*h)/2;
        if((a>=20)&&(a<=80)) {c++; cout<<"Area = "<<a<<endl;}
    }
    cout<<"Cantidad de triangulos mayores a 20 y menores a 80 == "<<c;
    return 0;

}
