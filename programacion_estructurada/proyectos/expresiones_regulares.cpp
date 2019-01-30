#include <iostream>
//LIBRERIAS NECESARIAS
#include <regex>
#include <string>

//INSTRUCCION NECESARIA
using namespace std;

int main() {
    //Sintaxis de las expresiones regulares: http://www.cplusplus.com/reference/regex/ECMAScript/
    //Herramienta web para las expresiones regulares: https://regexr.com/
    //Prepara la expresion regular para utilizarla mas adelante
    regex expresion1("\\[[0-9]+\\]");
    //guarda las coincidencias
    std::smatch coincidencias;
    //tu cadena de texto
    //No se te olvide de que si tienes un char * y quieres pasarlo a string, crea una funcion para concatenar
    string texto = "[1]El primero ...[2]...";
    //ciclo que recorrera todas las coincidencias del texto
    while (regex_search(texto,coincidencias,expresion1)){
        //ciclo para mostrar las coincidencias
        for (string aux : coincidencias) {
            //imprime la coincidencia
            printf("%s\n",aux.c_str());
        }
        //acuerdate de que esta instruccion corta el texto, para ir quitandolas del texto original
        texto = coincidencias.suffix().str();
    }
    //esta era para comprobar que era lo que quedaba del texto original
    printf("%s",texto.c_str());
    return 0;
}