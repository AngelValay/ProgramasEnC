//programa que solicite  el numero de control
//y sueldo de 100 empleados
//Utilizar vector A para los no de control y B para sueldos
//el programa tiene  que buscar un no de control en particular
//y calcular el nuevo sueldo del empleado (incremento del 8%)

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int i = 0;
    double A[100];
    float B[100];
    for(i=0;i<3;i++){
        cout<<"Ingresa el numero de control: "<<endl;
        cin>>A[i];
        cout<<"Ingresa tu sueldo : "<<endl;
        cin>>B[i];
        system("pause(null)");
    }
    system("cls");
    system("COLOR F9");

    double A1=0;float B1=0;int pos,band;
    cout<<"Teclea el numero de control a buscar"<<endl; cin>>A1;
    for(int i=0; i<3;i++){
        if(A1==A[i]) {
             B1 =B[i]*1.08; i=100;
            cout<<"Tu nuevo sueldo es : "<< B1 << endl;
        }
        //if(A1!=A[i]) cout<<"Not found ERROR 404";
    }
    return 0;
}

