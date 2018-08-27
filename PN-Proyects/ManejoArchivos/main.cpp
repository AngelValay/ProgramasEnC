//LINK DE APOYO:
//http://www.cplusplus.com/doc/tutorial/files/
#include <iostream>
//LIBRERIAS NECESARIAS
#include <fstream>
#include <string>
//INSTRUCCION NECESARIA
using namespace std;
//CONSTANTE
#define PATH_TEXTO "C:\\Users\\angel\\Documents\\Programacion Estructurada\\Proyects\\ManejoArchivos\\texto.txt"
int main() {
    //MODOS DE ACCESO O BANDERAS DE ACCESO
    //ios::in   -   Abre el archivo en modo lectura
    //ios::out  -   Abre el archivo en modo escritura
    //ios::ate  -   Abre el archivo en la posicion de final de archivo
    //ios::app  -   Todas las operacione de escritura se ponen al final del archivo
    //ios::trunc-   Si el archivo es abierto en modo escritura y existe, el contenido del archivo se borra
    //          -   y lo remplaza por el nuevo que se agregue
    //COMBINAR LOS MODOS
    //se utiliza el operador | para combinar varios modos de accceso

    fstream lectura(PATH_TEXTO,ios::out | ios::in);
    string linea;
    char * textoLin;
    while (getline(lectura, linea)){
        //lectura << "Hola" << "\n";
        textoLin = const_cast<char *>(linea.c_str());
        printf("%s\n",textoLin);
    }
    lectura.close();
    return 0;
}