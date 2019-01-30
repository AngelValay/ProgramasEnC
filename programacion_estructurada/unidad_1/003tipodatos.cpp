#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 10;
    float b;
    b = 5.12;
    long c;
    c = 15648775;
    double d;
    d = 15.1546546546786;
    char e;
    e='A';
    cout << "Entero: " << a << endl;
    cout << "Decimal corto: " << b << endl;
    cout << "Entero largo: " << c << endl;
    cout << "Decimal largo: " << d << endl;
    cout << "Caracter: " << e << endl;

    /*PUNTEROS*/
    int *z;
    z = &a;
    float *y;
    y = &b;
    long *x;
    x = &c;
    cout << "Direccion de memoria de z: " << z << endl;
    cout << "Direccion de memoria de y: " << y << endl;
    cout << "Direccion de memoria de x: " << x << endl;
    return 0;
}
