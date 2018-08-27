#include <stdlib.h>
#include <stdio.h>

int main (){
    /*

    */
    int cantInt;
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
    cantInt = 0;
    printf("*******PASOS PARA CREAR UN GRUPO DE WHATSAAPP:*******\n");
    printf("\t1. Abre Whatsapp.\n");
    system("PAUSE");

    printf("\t2. Selecciona la opcion de \"New group\".\n");
    system("PAUSE");

    printf("\t3. Escoge los integrantes del nuevo grupo.\n");
    printf("\t3.1 Ingresa la cantidad de integrantes del grupo: ");
    scanf("%d",&cantInt);
    system("PAUSE");

    printf("\t4. Ingresa el nombre del grupo (max 10 caracteres): ");
    scanf("%c%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10);
    system("CLS");

    printf("****EL GRUPO SE CREO CORRECTAMENTE****");
    printf("\nNombre del grupo:%c%c%c%c%c%c%c%c%c%c",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
    printf("\nAdministrador: Tu");
    cantInt = cantInt+1;
    printf("\nCantidad de integrantes: %d\n\n",cantInt);


    return 0;
}
