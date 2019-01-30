#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int op;
    do{
        cout<<"Teclea Una Opcion: "; cin >>op; system("cls");
    } while ((op!=1)&&(op!=2)&&(op!=3));
     float res = 0;
     int b,h;
     switch(op){
     case 1:
        cout<<"Teclea la base y la altura"<<endl; cin >>b>>h;
        res = b*h;
        cout<<"El area es: "<<endl<<res;
        break;
     case 2:
         h =0;
        for(int i=0;i<3;i++){
            cout<<"Teclea una calificacion: "<<endl; cin >>b;
            h = h + b;
        }
        res = h/3;
        cout<<"El promedio es: "<<endl<<res;
        break;
     case 3:
        cout<<"Teclea el lado de un pentagono"<<endl; cin>>b;
        h = 5;
        res = b*h;
        cout <<"Su perimetro es: "<<res;
        break;
     default:
        break;
     }
     return 0;

}
