#include <iostream>
using namespace std;
float lado,per,area;
int main()
{
    cout<<"Dame la medida de el lado de un cuadrado: ";
    cin>>lado;
    per = lado*4;
    area = lado*lado;
    cout<<"El perimetro del cuadrado es: "<<per;
    cout<<"    El area del cuadrado es: "<<area;
    return 0;

}
