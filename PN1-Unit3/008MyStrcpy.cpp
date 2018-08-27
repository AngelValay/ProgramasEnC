#include <iostream>
void copiarString(char *dest,char *origen);
int main() {
    char nombre[] = "Angel Armando Valay Martinez";
    char nombreCopia[]="";
    printf("Nombre original: %s",nombre);
    copiarString(nombreCopia,nombre);
    printf("\nNombre copiado %s",nombreCopia);
    return 0;
}
void copiarString(char *destino, char *origen){
    int i=0;
    while (origen[i]){
        destino[i]=origen[i];
        i++;
    }
    destino[i]='\0';
    //*destino = *origen;
}