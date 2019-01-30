#include <iostream>
#include <fstream>

using namespace std;

void funcion1(char *);
void funcion2(char *);

int main() {
    funcion1("archivo1.txt");
    funcion2("archivo1.txt");
    return 0;
}

void funcion1 (char * dir){
    ifstream archivo;
    archivo.open(dir);
    int lim=0;
    char linea[1024]={0};
    while (!archivo.eof()){
        archivo.getline(linea, sizeof(linea));
        lim++;
    }
    printf("\n%d\n",lim);
    int cont = 0;
    char lineas[lim][1024];
    archivo.close();
    archivo.open(dir);
    while (!archivo.eof()){
        archivo.getline(lineas[cont], sizeof(lineas[cont]));
        printf("\n%s",lineas[cont]);
        cont++;
    }
    archivo.close();
    ofstream archivo2;
    archivo2.open("archivo2.txt",ios::trunc);
    int cont2 = lim - 1;
    while (cont2 >= 0){
        archivo2 << lineas[cont2] << "\n";
        cont2--;
    }
    archivo2.close();
}

void funcion2(char * dir){
    ifstream archivo;
    archivo.open(dir);
    int lim=0;
    char linea[1024]={0};
    while (!archivo.eof()){
        archivo.getline(linea, sizeof(linea));
        lim++;
    }
    printf("\n%d\n",lim);
    int cont = 0;
    char lineas[lim][1024];
    archivo.close();
    archivo.open(dir);
    while (!archivo.eof()){
        archivo.getline(lineas[cont], sizeof(lineas[cont]));
        printf("\n%s",lineas[cont]);
        cont++;
    }
    archivo.close();
    ofstream archivo2;
    archivo2.open("archivo3.txt",ios::trunc);
    int cont2 = 0;
    archivo2 << "PARES:" << "\n";
    while (cont2 < lim){
        if((cont2+1) % 2 == 0){
            archivo2 << lineas[cont2] << "\n";
        }
        cont2++;
    }
    cont2 = 0;
    archivo2 << "IMPARES:" << "\n";
    while (cont2 < lim){
        if((cont2+1) % 2 != 0){
            archivo2 << lineas[cont2] << "\n";
        }
        cont2++;
    }
    archivo2.close();
}