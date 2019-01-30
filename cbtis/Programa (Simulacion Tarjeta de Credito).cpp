#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void ing_usuario(){
    double usuario, nip;
    double long x=0;
    double long y=0;
    x = (rand()%1000000) + 41000000;
    cout<<"Este sera tu no. de usuario.. GUARDALO "<<endl<<x<<endl;
    y = (rand()%9999) + 1111;
    cout<<"Tu NIP "<<endl<<y<<endl;


}
main(){
    ing_usuario();
    return 0;
}
