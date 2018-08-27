#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <conio.h> //getch

#define USER "CBTIS236"
#define PASS "CBTIS236"

using namespace std;

int main(){
    string usuario, password;
    int c =0;
    bool ingresa = false;
    do{
            system("cls");
        cout<<"\t\t\t LOGIN DE USUARIO"<<endl;
    cout<<"\t\t\t ----------------"<<endl;
    cout<<"\n\t Usuario: ";
    //funcion para sobreponer *
    getline(cin,usuario);
    //
    cout<<"\t Password: ";

    //getline(cin,password);

    char caracter;
    caracter = getch ();

     password = "";

    while (caracter != 13){
            password.push_back(caracter);
            cout<<"*";
            caracter = getch();

    }

    if((usuario == USER )&&(password== PASS)){

       ingresa = true;
    } else {
        cout<<"\n\n\t El usuario y o el password son incorrectos"<<endl;
        c++;
        cin.get();
    }
    }while ((ingresa == false)&&(c < 3));

    if(ingresa ==false){
        cout<<"\n\t Usted no pudo ingresar al sistema. ADIOS"<<endl;
    } else {
        cout<<"\n\t Bienvenido al sistema"<<endl;
    }
    exit;
}
