#include <iostream>


using namespace std;

int cal;

int main()
{
    cout <<"Tecla una calificacion "<<endl;
    cin >> cal;
    switch(cal){
    case 10:
       cout<<" Excelente";
       break;
    case 9:
        cout<<" Muy Bien";
        break;
    case 8:
        cout<<" Bien";
        break;
    case 7:
        cout<" Regular";
        break;
    case 6:
        cout<<" Suficiente";
        break;
    default:
        cout<<" NO acreditado";
        break;

    }

    return 0;
}
