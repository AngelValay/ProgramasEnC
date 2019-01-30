#include <iostream>
using namespace std;
int n1,n2,res;
int main ()
{
    cout<<"Ingresa el 1er numero: "; cin>>n1;
    cout<<"Ingresa el 2do numero: "; cin>>n2;
    if( n1 > n2 ) {
            res = n1 + n2;
    } else {
            res = n1 * n2;
    }
    cout<<"El resultado es: "<<res;
    return 0;
}
