#include <iostream>
#include <windows.h>


using namespace std;

main()
{
    int cant = 0, edad = 0 , ch=0,cm=0, K;
    char nm[100];
    int sex ;
    cout<<"Teclea la cantidad de personas: "; cin >>cant;

    for(K=1; K<=cant; K++){
        cout<<"Ingresa tu nombre: "; cin>>nm;
        cout<<"Ingresa tu edad: "; cin>>edad;
        cout<<"Ingresa tu sexo: "<<"Masculino=1 " <<" Femenino=0 " ; cin >> sex;
        if(sex==1) ch+=1;
        if(sex==0) cm+=1;
    }
    cout<<"Cantidad de hombres: "<<ch<<endl;
    cout<<"Cantidad de mujeres: "<<cm<<endl;

}
