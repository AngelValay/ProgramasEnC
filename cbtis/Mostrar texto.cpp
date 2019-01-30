#include <iostream>
#include <windows.h>
#include <stdio.h>



using namespace std;

int main()
{

char cad[]={"La funcion putchar se puede utilizar para visualizar una cadena de caracteres (almacenandola en un array), y escribir en un bucle los caracteres uno a uno."};
for(int i=0;cad[i]!='\0';i++){
		putchar(cad[i]);
		Sleep(30);
	}
    return 0;
}
