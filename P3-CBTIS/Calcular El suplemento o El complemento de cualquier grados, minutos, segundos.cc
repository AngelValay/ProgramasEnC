#include <iostream>
using namespace std;
#define aviso ">NO INTRODUSCIR DECIMALES<"
#define msg_error "Error de orden, vuelve a introducir el valor"
#define msg_revalidar "Fijate, que te pide!!"
#define MAX 2
int main (){
    int co_o_su [MAX] = {1,0};
    int op =0;
    int angulos,minutos,segundos,res_ang,res_min,res_seg;

    cout << "Deseas Iniciar SI=1,NO=0 "<<aviso<<":"<<endl; cin>>op;
    if (op==0){
        return 0;
    }

    while ((op != 1) && (op != 0 )){
        cout<<msg_error<<endl;
        cout << "Deseas Iniciar SI=1,NO=0 : "; cin>>op;
    }
    while ( op = 1 ){
        cout<< "Introduce los grados: ";
        cin>>angulos;
        cout<< "Ahora Introduce Los Minutos: ";
        cin>>minutos;
        cout<< "Introduce Los Segundos: ";
        cin>>segundos;
        while ((angulos<0)&&(angulos>180)||(minutos>60)||(segundos>60))
        {
            cout<<msg_revalidar<<endl;
            cout<< "Introduce los grados (RECUERDA QUE LOS ANGULOS DEBEN SER MENORES A 180 GRADOS): ";
            cin>>angulos;
            cout<< "Ahora Introduce Los Minutos (RECUERDA QUE LOS MINUTOS LLEGAN HASTA 60): ";
            cin>>minutos;
            cout<< "Introduce Los Segundos (RECUERDA QUE LOS SEGUNDOS DEBEN SER MENOR A 60: ";
            cin>>segundos;
        }
        cout<<"Que deseas saber?"<<endl;
        cout<<"El Suplemento "<<endl;
        cout<<"O el Complemento "<<endl;
        cout<<"Si es suplemento Introducir un   0   ,"<<"Si es Complemento Introducir un   1   : "; cin>>co_o_su[MAX];

        while (( co_o_su[MAX] != 0 ) && ( co_o_su[MAX] !=1 )){
                cout<<msg_revalidar<<endl;
                cout<<"Si es suplemento Introducir un 0 ,"<<"Si es Complemento Introducir un 1 : "; cin>>co_o_su[MAX];
        }
        if (co_o_su[MAX] == 0){
            res_ang = (179-angulos) ;
            res_min = (59-minutos) ;
            res_seg = (60-segundos);
            cout<<"El Suplemento de "<<angulos<<" grados, "<<minutos<<" minutos,"<<segundos<<" segundos es: "<<endl;
            cout<<res_ang<<" grados, "<<res_min<<" minutos,"<<res_seg<<" segundos  "<<endl;
        } else if ( co_o_su[MAX] ==1 ){
            res_ang = (89-angulos) ;
            res_min = (59-minutos) ;
            res_seg = (60-segundos);
            cout<<"El Complemento  de "<<angulos<<" grados, "<<minutos<<" minutos,"<<segundos<<" segundos es: "<<endl;
            cout<<res_ang<<" grados, "<<res_min<<" minutos,"<<res_seg<<" segundos  "<<endl;
            }
            cout<<"Desea Continuar? (SI=1,NO=0)";
            cin>>op;
            if(op==0){
                return 0;
            }

     }
}

