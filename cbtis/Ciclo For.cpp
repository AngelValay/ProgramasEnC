#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int I = 1;

void val( )
{
    int V=0;
    cout<<"Validando.";
    for(V= 1;V<6;V++){
        cout<<".";
        Sleep(100);
    }cout<<"."<<endl;


}



main (){
    int suma = 0;
    for(I=1;I<=10;I++){

        suma ++;

    }
    val();
    cout<<suma;

    getch();
}
