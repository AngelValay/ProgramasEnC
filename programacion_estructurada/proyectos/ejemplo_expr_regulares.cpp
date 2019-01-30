#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string texto = "Arreola, J. (2018). ¿Cómo está cambiando la privacidad en 2018? Recuperado el 10 de Juny de 2018, de Forbes Mexico: https://www.forbes.com.mx/como-esta-cambiando-la-privacidad-en-2018/";
    string ano_cita = "2017" ;
    regex mi_expresion("\\(" + ano_cita + "\\)");
    smatch coinci;
    if(regex_search(texto, coinci, mi_expresion)){
        for (string coin : coinci){
            cout << coin << endl;
        }
    }
    return 0;
}