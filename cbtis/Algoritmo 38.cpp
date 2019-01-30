#include <iostream>
#include <windows.h>
using namespace std;
int c,cuubo,n, ac;
int I;
int main()
{
c = 0;
    for (c=1;c<=100;c++){
        cuubo = (c*c*c);
        ac += cuubo;
        cout<<"Validando.";
        for(I=1;I<=6;I++){
        cout<<".";
        Sleep (150);

        }cout<<"."<<endl;

        cout<<"El cubo de "<<c<<" es: "<<cuubo<<endl;
    }
    cout<<"La suma de los cubos es:"<<ac;
    return 0;

}
