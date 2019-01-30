#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int op;
    int hora,d,c,c1 = 0;
    float ct,costo = 0;

    cout<<"Deseas rentar un auto? SI=1.NO=0:  ";
    cin>>op;
    cout<<"Validando.";
    for(int i=1;i<=5;i++){
        cout<<".";
        Sleep (1000);

    }
    cout<<"."<<endl;
    c=0;

    while(op==1)
        {

            cout<<" x hora(1)  O   x dia (0):  ";
            cin>>op;
            cout<<"Validando.";
             for(int i=1;i<=5;i++){
               cout<<".";
               Sleep (1000);

             }
    cout<<"."<<endl;
            if(op==0)
            {
                cout<<"Ingresa los dias a rentar: ";
                cin>>d;
                cout<<"Validando.";
                for(int i=1;i<=5;i++){
                  cout<<".";
                  Sleep (100);

                }
                cout<<"."<<endl;
                cout<<"Ingresa el costo del dia: ";
                cin>>ct;
                cout<<"Validando.";
                for(int i=1;i<=5;i++){
                    cout<<".";
                    Sleep (100);

               }
               cout<<"."<<endl;
                costo = d*ct;
                c = c + 1;
            }
            else if (op==1)
            {
                cout<<"Cantidad de horas a rentar: ";
                cin>>hora;
                cout<<"Validando.";
                for(int i=1;i<=5;i++){
                   cout<<".";
                   Sleep (100);

                }
                cout<<"."<<endl;
                if( hora < 5){
                costo = 100 * hora;
                }else if (( hora > 5) && (hora < 11)){
                costo = 80 * hora;
                }else if (( hora > 10) && ( hora < 16)){
                costo = 70 * hora;
                }else if (( hora > 15) && ( hora < 21)){
                costo = 60 * hora;
                }else if (( hora > 20) && ( hora <24 )){
                costo = 50 * hora;
                }else if( hora >23){
                costo = 0;
                }


           }
           if (hora<10)
           {
                c1 = c1+1;
           }
           cout<<"Total a pagar:  "<<costo<<endl;
           cout<<"  Desea continuar?: ";
           cin>>op;
           cout<<"Validando.";
           for(int i=1;i<=5;i++){
              cout<<".";
              Sleep (100);

           }
           cout<<"."<<endl;

     }

  cout<<"Cantidad de clientes que rentaron por dia: "<<c<<endl;
  cout<<"Cantidad de clientes que rentaron un auto por menos de 10 horas: "<<c1<<endl;

  return 0;



}
