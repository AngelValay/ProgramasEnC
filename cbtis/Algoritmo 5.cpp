#include <iostream>
using namespace std;
float d,c,cambio;
int main(){
    cout<<"Ingresa el valor que tiene el peso mexicano frente al dolar: ";
    cin>>c;
    cout<<"Ingresa la cantidad de dolares: ";
    cin>>d;
    cambio = c*d;
    cout<<"Valor en Peso Mexicano: "<<cambio;
    return 0;
}
