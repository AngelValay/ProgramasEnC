#include <iostream>

using namespace std;

int main()
{
    float pag,num,costo,desc,res;
    int pro;
    float pag1;
    cout <<"Cuantas materias va a cursar? "<<endl; cin >> num;
    cout<<"Cuanto va a costar? "<<endl; cin >> costo;
    pag= num*costo;
    cout<<"Teclea Tu Promedio: "<<endl; cin>> pro;

    switch (pro){
    case 10:
        pag1 = pag *0.5;
        break;
    case 9:
        pag1 = pag*0.7;
        break;
    default:
        pag1=pag;
        break;
    }

    cout<<"Total a pagar: "<<pag1;
    return 0;
}
