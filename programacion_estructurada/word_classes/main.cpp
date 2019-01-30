#include <fstream>
#include <iostream>
#include <string>

#define PATH "text.txt"
#define PATH_NOUNS "list-nouns.txt"
#define PATH_VERBS "list-verbs.txt"
#define PATH_ADJ "list-adjectives.txt"
#define PATH_ADV "list-adverbs.txt"
#define PATH_CONJ "list-conjunctions.txt"
#define PATH_DET "list-determiners.txt"
#define PATH_EXC "list-exclamations.txt"
#define PATH_PRE "list-prepositions.txt"
#define PATH_PRO "list-pronouns.txt"

using namespace std;

string leerArchivo(string);
string cambiarMinus(string);
string cambiarCar(string);
string eliminarEsp(string);
int compararPal(string, string);
void buscarPalabras(string);
string obtenerLista(string);
string formatear(string);

//variables globales para los catalogos
string lNouns;
string lVerbs;
string lAdj;
string lAdv;
string lPron;
string lPrep;
string lConj;
string lDet;
string lExclam;

int main() {
//    string texto = leerArchivo(PATH);
//    printf("%s",texto.c_str());
    lNouns  = obtenerLista(PATH_NOUNS);
    lVerbs  = obtenerLista(PATH_VERBS);
    lAdj    = obtenerLista(PATH_ADJ);
    lAdv    = obtenerLista(PATH_ADV);
    lPron   = obtenerLista(PATH_PRO);
    lPrep   = obtenerLista(PATH_PRE);
    lConj   = obtenerLista(PATH_CONJ);
    lDet    = obtenerLista(PATH_DET);
    lExclam = obtenerLista(PATH_EXC);

    string texto;
    texto = formatear(leerArchivo(PATH));
    //printf("%s\n",texto.c_str());
    buscarPalabras(texto);
    return 0;
}
string obtenerLista(string path){
    string lista;
    string texto;
    string aux1;
    string aux2;
    texto = leerArchivo(path);
    //formateo
    aux1 = cambiarMinus(texto);
    aux2 = cambiarCar(aux1);
    lista = eliminarEsp(aux2);
    return lista;
}
string formatear(string texto){
    string txtForm;
    string aux1;
    string aux2;
    //formateo
        aux1 = cambiarMinus(texto);
    aux2 = cambiarCar(aux1);
    txtForm = eliminarEsp(aux2);
    return txtForm;
}

string leerArchivo(string path){
    FILE *file = fopen(path.c_str(), "r");
    char c;
    string destino = "";
    if (file==NULL)
        printf ("Error reading file %s", path.c_str());
    else{
        do {
            c = getc (file);
            destino += c;
        } while (c != EOF);
        fclose (file);
    }
    return destino;
}

string cambiarMinus(string origen){
    const char *auxiliar = origen.c_str();
    string aux = "";
    for (int i = 0; auxiliar[i]; ++i) {
        aux += (char) tolower(auxiliar[i]);
    }
    return aux;
}

string cambiarCar(string origen){
    char remplazo = ' ';
    string aux="";
    const char *auxOrigen = origen.c_str();
    for (int i = 0; auxOrigen[i]; ++i) {
        if (!(islower(auxOrigen[i]) || isspace(auxOrigen[i])) || auxOrigen[i] == '\t' || auxOrigen[i] == '\n'){
            //printf("\nThis character \"%c\" in position %d is not allowed",origen[i],i+1);
            aux+= remplazo;
        }else{
            aux+= auxOrigen[i];
        }
    }
    return aux;
}

string eliminarEsp(string origen){
    const char *auxOrigen = origen.c_str();
    string destino;
    for (int i = 0; auxOrigen[i]; ++i) {
        if (!(islower(origen[i]) || isspace(auxOrigen[i])) || (isspace(auxOrigen[i]) && !islower(auxOrigen[i+1]))){
            //printf("\nThis character \"%c\" in position  %d is not allowed",origen[i],i+1);
        }else{
            destino += auxOrigen[i];
        }
    }
    return destino;
}

void buscarPalabras(string texto){
    int nouns       = 0;
    int verbs       = 0;
    int adj         = 0;
    int adv         = 0;
    int pron        = 0;
    int prep        = 0;
    int conj        = 0;
    int deter       = 0;
    int excla       = 0;
    const char * tex= texto.c_str();
    int min = 0;
    int max = -1;
    for (int i = 0; i < texto.length(); ++i) {
        if (tex[i] == ' '){
            int aux = max + 1;
            max = i;
            min = aux;
            //primer parametro la posicion y la segunda la cantidad de caracteres
            string palabra = texto.substr(min,(max-min));
            nouns += compararPal(palabra,lNouns);
            verbs += compararPal(palabra,lVerbs);
            adj   += compararPal(palabra,lAdj);
            adv   += compararPal(palabra,lAdv);
            pron  += compararPal(palabra,lPron);
            prep  += compararPal(palabra,lPrep);
            conj +=  compararPal(palabra,lConj);
            deter+=compararPal(palabra,lDet);
            excla+=compararPal(palabra,lExclam);
        }
    }
    printf("Adjectives: %d",adj);
    printf("\nAdverbs: %d",adv);
    printf("\nConjuntions: %d",conj);
    printf("\nDeterminers: %d",deter);
    printf("\nExclamations: %d",excla);
    printf("\nNouns: %d",nouns);
    printf("\nPrepositions: %d",prep);
    printf("\nPronouns: %d",pron);
    printf("\nVerbs: %d",verbs);

}

int compararPal(string palabra1, string lista){
    int enc = 0;
    const char * tex= lista.c_str();
    int min = 0;
    int max = -1;
    for (int i = 0; i < lista.length(); ++i) {
        if (tex[i] == ' '){
            int aux = max + 1;
            max = i;
            min = aux;
            //primer parametro la posicion y la segunda la cantidad de caracteres
            string palabra = lista.substr(min,(max-min));
            //printf("%s\n",palabra.c_str());
            if (palabra1 == palabra){
                enc = 1;
                break;
            }
        }
    }
    return enc;
}