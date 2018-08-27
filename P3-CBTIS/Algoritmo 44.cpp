#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int n, esp, X, a=0,b=0,c=0,d=0,e=0,f=0;
    cout<<"Teclea la cantidad de alumnos del CBTIS 236: "; cin >>n;
    cout<<"    == 1-Administracion De Recursos Humanos "<<endl;
        cout<<"    == 2-Contablidad "<<endl;
        cout<<"    == 3-Programacion "<<endl;
        cout<<"    == 4-Electricidad "<<endl;
        cout<<"    == 5-Laboratorio Quimico "<<endl;
        cout<<"    == 6-Puericultura "<<endl;
    for(X=1;X<=n;X++){

        cin>>esp;
        switch(esp){
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        default:
            cout<<"No ingresastes una opcion: "<<endl;
            break;
        }


    }
    system("cls");
    cout<<"    == "<<a<< " Son de Administracion De Recursos Humanos "<<endl;
        cout<<"    == "<<b<< " Son de Contablidad "<<endl;
        cout<<"    == "<<c<< " Son de Programacion "<<endl;
        cout<<"    == "<<d<< " Son de Electricidad "<<endl;
        cout<<"    == "<<e<< " Son de Laboratorio Quimico "<<endl;
        cout<<"    == "<<f<< " Son de Puericultura "<<endl;


    return 0;
}
