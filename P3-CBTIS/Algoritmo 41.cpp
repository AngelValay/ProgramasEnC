#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int A,J;
    int pro[52][6];
    int suma=0, pr=0;
    for(A=1;A<=52;A++){
        for(J=1;J<=6;J++){
                cout<<"Teclea el promedio del "<<A<<" alumno, promedio "<<J<<endl;
                cin>>pro[A][J];
                suma = suma + pro[A][J];


        }
        pr= suma / 6;

        if(pr<6) cout<<"Reprobado"<<endl;
        else cout<<"Aprobado"<<endl;
        Sleep(2000);
        system("pause");
        system("cls");
    }
    return 0;
}
