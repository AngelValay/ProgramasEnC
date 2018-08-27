#include <iostream>

using namespace std;

main()
{
    int n, may,men=32767,i;
    int cant;
    cout<<"Teclea la cantidad de numeros: "; cin >> cant;
    for(i=0;i<cant;i++){
        //evaluando el numero
        do{ cout<<endl<<"Teclea un numero positivo"<<endl; cin>>n;if (n<0) {cout<<"Disculpa. Vuelve a intentarlo "<<endl; continue;} } while(n<0);
        //par
        if(n%2==0){
            may=n;
            if(n<may) may=n;
        } /*impar*/else {

            if(n<men) men=n;
        }


    }
    if(men==32767) men=0;
    cout<<"El numero par mayor es: "<<may<<endl;
    cout<<"El numero non menor es: "<<men;
    cin.get();
}
