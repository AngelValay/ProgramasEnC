#include <iostream>

using namespace std;

void RetirarDinero (double &Importe,double cantidad,char*tipo)
{
   int contador =0;

   while(Importe>=cantidad){
    Importe -= cantidad;
    contador++;
   }

   if(contador>0) cout<<tipo<<" de "<<cantidad<<" : "<<contador<<endl;
}
int main()
{
    double importe;
    double cantidades[]={1000,500,200,100,50,20,10,5,2,1,0.5,0.2,0.1};

    cout<<"Teclea el Importe :"<<endl; cin>>importe;

    cout<<"El importe "<<importe<<" se expendera de la siguiente forma: "<<endl;

    for(int i=0;i<13;i++){
        if(i<7) RetirarDinero(importe,cantidades[i],"BILLETES");
        else RetirarDinero(importe,cantidades[i],"MONEDAS");
    }

    return 0;
}
