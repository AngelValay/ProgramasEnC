#include <iostream>
//LIBRERIA NECESARIA
#include <string>

using namespace std;

int main() {
    string nombre= "Juan Perez Martinez";
    printf("%s\n", nombre.c_str());
    printf("Longitud de la cadena %d\n", nombre.size());
    printf("Se encontro Perez: %d", nombre.find("Ho"));
    printf("\n%s", nombre.substr(0, 4).c_str());
    nombre.clear();

    char *name = const_cast<char *>(nombre.c_str());
    printf("\n%s", name);
    return 0;
}