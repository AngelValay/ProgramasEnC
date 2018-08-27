#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <wincrypt.h>
#include <tgmath.h>
#include <winioctl.h>
#include <conio.h>
#include <schannel.h>
int main() {

    printf("toupper(\'a\') %c",toupper('a'));
    printf("\n");

    printf("log(10) %lf",log(10));
    printf("\n");

    printf("stlren(\"Hola Mundo\") %d",strlen("Hola Mundo"));

    time_t now;
    time(&now);
    printf("\nctime(&now) %s",ctime(&now));

    printf("atoi(Hola) %d",atoi("Hola"));\

    printf("\nisdigit(\'a\') %d",isdigit('a'));

    printf("\nisspace(\' \') %d",isspace(' '));

    printf("\nacos(1.5) %lf",acos(0.154));

    printf("\nopen(\'main.cpp\') %d\n",open("main.cpp",1));

    FILE *stream;
    stream = fopen("data.dat","r");
    if (stream == NULL)
        printf("Can't open data.dat file for read\n");
    else
        printf("data.dat opened for read\n");

    return 0;
}