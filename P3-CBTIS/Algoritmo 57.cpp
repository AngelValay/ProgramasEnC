#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#define MAX 2
int main()
{
    int op[MAX]={1,0};
    int anos,e,c,c1,c2,pre;
    string nombre;
    float sact,ns;
    c=c1=c2=0;

    cout<<"Deseas Iniciar? Si=1,No=0: ";
    cin>>op[MAX];
    while (op[MAX]==1){
        cout<<"Ingresa el nombre: "; cin >>nombre;
        cout<<"Ingresa su sueldo actual: "; cin>>sact;
        cout<<"Ingresa su preparacion ( 1=Tecnico, 2=licenciatura, 3=Maestria ): "; cin>>pre;
        cout<<"Cuantos anos trabajas?: "; cin>>anos;
        cout<<"Ingresa su edad: "; cin>>e;
        if ( pre==1) {
            c += 1;
        }else if (pre != 1){
            c1 += 1;
        } else if ((anos>=20)&&(anos<=25)){
            c2 += 1;
        };
        ns = 0;
        if (pre=3){
            ns=sact * 1.10;
        } else if (pre=2){
            ns=sact * 1.08;
        } else if (pre=1){
            ns=sact * 1.06;
        }
        cout<<"Su nuevo sueldo es: "<<ns<<endl;
}
cout<<"Empleados que son tecnicos: "<<c<<endl;
cout<<"Empleados que no tienen maestria: "<<c1<<endl;
cout<<"Empleados entre 20 y 25 anos trabajando: "<<c2;
return 0;
}
