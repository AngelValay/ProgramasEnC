#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    long int n;
    int Z = 0;
    int I=1;
    for (Z = 1;Z<=10;Z++){
        n = Z*8;
        cout<<Z<<" por 8 es: "<<n<<endl;
        cout<<"Validando.";
        for(I=1;I<=6;I++){
        cout<<".";
        Sleep (150);

        }cout<<"."<<endl;
    }
    return 0;
}
