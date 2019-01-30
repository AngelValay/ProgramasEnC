#include <iostream>

using namespace std;

int main()
{
    int hr;
    cout <<"Cuantas horas trabajas semanalmente?"<<endl;
    cin >> hr; int sal ; int extra ;
    if(hr<=40) {sal = hr*20;
    }else{
        extra= hr-40;
        sal= 800 + (extra *25);
    }
    cout<<"Tu salario es de: $"<<sal<<endl;

    return 0;
}
