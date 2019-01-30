#include <iostream>
using namespace std;
long int nacimiento,actual,edad;
int main(){
    cout<<"Ingresa tu ano de nacimiento: ";
    cin>>nacimiento;
    cout<<"Ingresa el ano actual: ";
    cin>>actual;
    edad = actual-nacimiento;
    cout<<"Tu edad aproximada es: "<<edad;
    return 0;
}
