#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void funcion1(char *);
void funcion2(char *);
void funcion3(char *);

int main() {
    funcion1("archivo1.txt");
    funcion2("archivo1.txt");
    funcion3("archivo1.txt");
    return 0;
}

void funcion1 (char * dir){
    FILE *file = fopen(dir, "r");
    char c;
    if (file==NULL)
        printf ("Error reading file %s", dir);
    else{
        printf("METODO 1:\n\n\n");
        do {
            c = getc (file);
            printf("%c",c);
        } while (c != EOF);
        fclose (file);
    }
}
void funcion2 (char * dir){
    FILE *file = fopen(dir, "r");
    FILE *file2= fopen("archivo2.txt","w");
    char c,car;
    char txt[1024]={0};
    int pos=0;
    if (file==NULL)
        printf ("Error reading file %s", dir);
    else{
        printf("\n\nMETODO 2:\n\n\n");
        do {
            c = getc (file);
            txt[pos]=c;
            pos++;
        } while (!feof(file));
        fclose (file);
    }
    txt[pos]='\0';
    int j=0;
    for (j = 0; txt[j]; ++j) {
    }
    char nTxt[j]={0};
    for (int i = j-2; i >= 0; --i) {
        nTxt[j-i-2]=txt[i];
    }
    fputs(nTxt,file2);
    fclose(file2);
    file2= fopen("archivo2.txt","r");
    if (file2==NULL)
        printf ("Error reading file %s", dir);
    else{
        do {
            c = getc (file2);
            printf("%c",c);
        } while (c != EOF);
        fclose (file2);
    }
}

void funcion3(char * dir){
    FILE *file = fopen(dir, "r");
    FILE *file2 = fopen("archivo3.txt","w");
    char linea[1024]={0};
    char c;
    int lim=0;
    if (file==NULL) {
        printf ("Error reading file %s", dir);
    }
    else{
        printf("\n\nMETODO 3:\n\n\n");
        do {
            lim++;
            fgets(linea,sizeof(linea),file);
        } while (!feof(file));
        fclose (file);
    }
    char texto[lim][1024];
    int con=0;
    file = fopen(dir, "r");
    if (file==NULL) {
        printf ("Error reading file %s", dir);
    }
    else{
        do {
            fgets(texto[con],sizeof(linea),file);
            con++;
        } while (!feof(file) || con<lim);
        fclose (file);
    }
    if(lim>2) {
        for (int i = 1; i < lim - 1; ++i) {
            fprintf(file2, "%s", texto[i]);
        }
    }
    fclose(file2);
    file2= fopen("archivo3.txt","r");
    if (file2==NULL)
        printf ("Error reading file %s", dir);
    else{
        do {
            c = getc (file2);
            printf("%c",c);
        } while (c != EOF);
        fclose (file2);
    }
}