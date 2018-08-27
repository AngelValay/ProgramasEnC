#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a=0,b=0,c=0,i=0,j=0,k=0;
    float pro_cbtis=0, pro_grupo=0, pro_alumno=0, suma_cbtis=0,suma_grupo=0, suma_alumno=0,cal_alumno=0;

    cout<<"Teclea la cantidad de grupos existentes en el cbtis 236: "; cin>>a;
    for(i=0;i<a;i++){
        cout<<"\n Teclea la cantidad de alumnos: "; cin>>b;

        for(j=0;j<b;j++){
            cout<<"\n Teclea la cantidad de materias: "; cin>>c;
            system("cls");

            for(k=0;k<c;k++){
                    cout<<" MAT "<<k+1<<" AL "<<j+1<<" GRUPO "<<i+1;
                cout<<"\n\n\n Teclea la calificacion del alumno: "; cin>>cal_alumno;
                suma_alumno+=cal_alumno;
            }

            pro_alumno= suma_alumno/c;
            cout<<"\n El promedio del alumno es: "<<pro_alumno<<endl;
            suma_grupo+=pro_alumno;
            suma_alumno=0;
            pro_alumno=0;
        }
        system("cls");
        pro_grupo=suma_grupo/b;
        cout<<"\n El promedio del grupo es:"<<pro_grupo;
        suma_cbtis+=pro_grupo;
        suma_grupo=0;
        pro_grupo=0;

    }
    system("cls");
    pro_cbtis=suma_cbtis/a;
    cout<<"\n Promedio del CBTIS 236: "<<pro_cbtis;

    return 0;

}
