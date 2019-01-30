#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int vectors[5];
    int candidato1;
    int i=0;
    int suma=0;
    float pro;
    for (i = 0; i < 4; i++ ){
        cout << "ingresa un promedio: "<<endl;
        cin >> vectors[i];

    }
    for( i = 0; i < 4; i++){

        if(vectors[i]<candidato1){
            candidato1 = vectors[i];

        }
         suma +=vectors[i];

    }

    pro = (suma-candidato1)/3;
    cout<<"Promedio de las 3 notas mayores:  " << pro<<endl;
    cout<<"La nota menor es:  "<<candidato1;
}
