#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

#define PATH_IEE "text-ieee.txt"
#define PATH_VAN "text-van.txt"
#define PATH_MY "text-mystyle.txt"
#define PATH_CITAS "citas.txt"
#define PATH_BIB "bibliografias.txt"
#define PATH_BIB_CIT "ref-citadas.txt"
#define PATH_BIB_VI "ref-viudas.txt"
#define PATH_CITAS_REF "citas-ref.txt"
#define PATH_CITAS_VI "citas-viudas.txt"
#define PATH_YEARS "fechas.txt"
#define PATH_FREC "frecuencias.txt"


void vaciarArchivos();
void leerArchivo(int);
string cambiarCar(string);
int getCitasIEEE(string);
int getCitasVancouver(string);
int getCitasMiEstilo(string);
void getBibIEEE(string);
int isBibIEEE(string);
void getBibVancouver(string);
void getBibMiEstilo(string);
void clasCitas(int);
int findBreak(string);
void getYears();
void getFrecuencias();
string eliminarEsp(string );

int main() {
    int opcion;
    do {
        printf("Selecciona el estilo bibliografico:\n\t1. IEE\n\t2. Vancouver\n\t3. Mi estilo\n");
        scanf("%d", &opcion);
        if (opcion>=1 && opcion<=3)
            break;
        printf("Opcion incorrecta");
    }while(1);
    vaciarArchivos();
    system("cls");
    leerArchivo(opcion);
    clasCitas(opcion);
    getYears();
    getFrecuencias();
	system("PAUSE");
    return 0;
}

void vaciarArchivos(){
    ofstream bib;
    bib.open(PATH_BIB,ios::trunc);
    bib << "";
    bib.close();
    ofstream citas;
    citas.open(PATH_CITAS,ios::trunc);
    citas << "";
    citas.close();
    ofstream bib_cit;
    bib_cit.open(PATH_BIB_CIT,ios::trunc);
    bib_cit << "";
    bib_cit.close();
    ofstream bib_vi;
    bib_vi.open(PATH_BIB_VI,ios::trunc);
    bib_vi << "";
    bib_vi.close();
    ofstream citas_ref;
    citas_ref.open(PATH_CITAS_REF,ios::trunc);
    citas_ref << "";
    citas_ref.close();
    ofstream citas_vi;
    citas_vi.open(PATH_CITAS_VI,ios::trunc);
    citas_vi << "";
    citas_vi.close();
    ofstream fechas;
    fechas.open(PATH_YEARS,ios::trunc);
    fechas << "";
    fechas.close();
    ofstream frec;
    frec.open(PATH_FREC,ios::trunc);
    frec << "";
    frec.close();
}

int getCitasIEEE(string texto){
    regex exp1("[[:print:]]*\\[[0-9]+\\][[:print:]]*");
    regex exp3("\\[[0-9]+\\]");
    smatch m;
    smatch aux;
    string c;
    int cont = 0;
    ofstream file;
    texto = cambiarCar(texto);
    file.open(PATH_CITAS,ios::app);
    if(regex_search(texto, aux, exp1)) {
        string auxTxt = texto;
        while (regex_search(auxTxt, m, exp3)) {
            for (auto x : m){
                if( !isBibIEEE(auxTxt)){
                    file<< x <<endl;
                    cont ++;
                }
            }
            auxTxt = m.suffix().str();
        }

    }
    file.close();
    return cont;
}
int isBibIEEE(string texto){
    regex exp2("^\\[[0-9]+\\][ ][ ][A-Za-z][[:print:]]+\\,[[:print:]]+");
    smatch m;
    int dev = 0;
    texto = cambiarCar(texto);
    if (regex_search(texto, m, exp2)) {
        for (auto x : m){
            dev = 1;
            break;
        }
    }
    return dev;
}
void getBibIEEE(string texto){
    regex exp2("^\\[[0-9]+\\][ ][ ][A-Za-z][[:print:]]+\\,[[:print:]]+");
    smatch m;
    smatch aux;
    texto = cambiarCar(texto);
    ofstream file;
    file.open(PATH_BIB,ios::app);
    if (regex_search(texto, m, exp2)) {
        for (auto x : m){
            file << x << endl;
        }
    }
    file.close();
}

int  getCitasVancouver(string texto){
    regex exp1("[[:print:]]*\\([0-9]+\\)[[:print:]]*");
    regex exp3("\\([0-9]+\\)");
    //regex exp2("^\\[[0-9]+\\][A-Za-z .]+\\,[[:print:]]+\\,[[:print:]]+\\.$");
    smatch m;
    smatch aux;
    int cont = 0;
    ofstream file;
    file.open(PATH_CITAS,ios::app);
    texto = cambiarCar(texto);
    if(regex_search(texto,exp1)) {
        string auxTxt = texto;
        while (regex_search(auxTxt, m, exp3)) {
            for (auto x : m){
                    cont ++;
                    file << x << endl;
            }
            auxTxt = m.suffix().str();
        }
    }
    file.close();
    return cont;
}
void getBibVancouver(string texto){
    regex exp2("^[0-9]+[.][ ][A-Za-z ,]+[[:print:]]*[;][[:print:]]+");
    smatch m;
    smatch aux;
    texto = cambiarCar(texto);
    ofstream file;
    file.open(PATH_BIB,ios::app);
    if (regex_search(texto, m, exp2)) {
        for (auto x : m)
            file << x.str() << endl;
    }
    //cout << texto << endl;
    file.close();
}

int getCitasMiEstilo(string texto){
    regex exp3("\\{[[:alnum:] &]+\\,[ ][0-9]+\\}");
    regex exp1("[[:print:]]*\\{[[:alnum:] &]+\\,[ ][0-9]+\\}[[:print:]]*");
    smatch m;
    smatch aux;
    int cont = 0;
    texto = cambiarCar(texto);
    ofstream file;
    file.open(PATH_CITAS,ios::app);
    if(regex_search(texto, aux, exp1)) {
        string auxTxt = texto;
        while (regex_search(auxTxt, m, exp3)) {
            for (auto x : m){
                file << x << endl;
                cont ++;
            }
            auxTxt = m.suffix().str();
        }
    }
    file.close();
    return cont;
}
void getBibMiEstilo(string texto){
    regex exp2("^[[:alpha:], ]+[.][[:print:]]*\\([[:print:]]*\\)[. ,][[:print:]]*");
    smatch m;
    smatch aux;
    texto = cambiarCar(texto);
    ofstream file;
    file.open(PATH_BIB,ios::app);
    if (regex_search(texto, m, exp2)) {
        for (auto x : m)
            file << x << endl;
    }
    file.close();
}

void leerArchivo(int opcion){
    string path;
    switch (opcion){
        case 1:
            path = PATH_IEE;
            break;
        case 2:
            path = PATH_VAN;
            break;
        case 3:
            path = PATH_MY;
            break;
        default:
            path = PATH_MY;
    }
    ifstream file (path);
    string line;
    int contCitas = 0;
    while (getline(file,line) ){
        smatch m;
        smatch aux;
        line = cambiarCar(line);

        switch (opcion){
            case 1:
                contCitas += getCitasIEEE(line);
                getBibIEEE(line);
                break;
            case 2:
                contCitas += getCitasVancouver(line);
                getBibVancouver(line);
                break;
            case 3:
                contCitas += getCitasMiEstilo(line);
                getBibMiEstilo(line);
                break;
            default:
                contCitas += getCitasMiEstilo(line);
                getBibMiEstilo(line);
        }


    }

    printf("\nCantidad de citas: %d",contCitas);

}

void clasCitas(int opcion){
    ifstream file (PATH_CITAS);
    string line;
    ifstream bibs;
    if(opcion == 1){

        //CICLO PARA LAS CITAS
        while ( getline(file,line) ){
            bibs.open(PATH_BIB, ios::in);
            string biblio;
            string expr;
            expr += "^\\"+ line.substr(0,1) ;
            expr += line.substr(1,line.length()-2);
            expr += "\\" + line.substr(line.length()-1,1);
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_CITAS_REF, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_CITAS_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            //cout << line << endl;
            bibs.close();
        }
        file.close();
        //CICLO PARA LAS BIBLIOGRAFIAS
        file.open(PATH_BIB,ios::in);
        while ( getline(file,line) ){
            bibs.open(PATH_CITAS, ios::in);
            string biblio;
            string expr;
            expr = "^\\"+ line.substr(0,line.find("]"))+ "\\]";
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_BIB_CIT, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_BIB_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            bibs.close();
        }
        file.close();
    }else if(opcion == 2){

        //CICLO PARA LA CITAS
        while ( getline(file,line) ){
            bibs.open(PATH_BIB, ios::in);
            string biblio;
            string expr;
            expr += "^"+ line.substr(1,line.length()-2);
            expr += "\\.";
            //cout << expr << endl;
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_CITAS_REF, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_CITAS_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            bibs.close();
        }
        file.close();
        file.open(PATH_BIB,ios::in);
        //CICLO PARA LAS BIBLIOGRAFIA
        while ( getline(file,line) ){
            bibs.open(PATH_CITAS, ios::in);
            string biblio;
            string expr;
            expr = "^\\("+ line.substr(0,line.find(".")) + "\\)";
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_BIB_CIT, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_BIB_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            bibs.close();
        }
        file.close();
    }else if(opcion == 3){
        //CICLO PARA LA CITAS
        while ( getline(file,line) ){
            bibs.open(PATH_BIB, ios::in);
            string biblio;
            string expr;
            expr += "^"+ line.substr(1,line.find(" "));
            //cout << expr << endl;
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_CITAS_REF, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_CITAS_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            bibs.close();
        }
        file.close();
        file.open(PATH_BIB,ios::in);
        //CICLO PARA LAS BIBLIOGRAFIA
        while ( getline(file,line) ){
            bibs.open(PATH_CITAS, ios::in);
            string biblio;
            string expr;
            expr = "^\\{" + line.substr(0, static_cast<unsigned int>(findBreak(line)));
            //cout << expr << endl;
            int encontrado = 0;
            while (getline(bibs,biblio)) {
                smatch m;
                regex exp1(expr);
                if (regex_search(biblio,m,exp1)) {
                    //cout << expr << endl;
                    ofstream citas_ref;
                    citas_ref.open(PATH_BIB_CIT, ios::app);
                    citas_ref << line << endl;
                    citas_ref.close();
                    encontrado = 1;
                    break;
                }
            }
            if(encontrado == 0){
                ofstream citas_ref;
                citas_ref.open(PATH_BIB_VI, ios::app);
                citas_ref << line << endl;
                citas_ref.close();
            }
            bibs.close();
        }
        file.close();
    }
}

void getFrecuencias(){
    ifstream file (PATH_YEARS);
    ofstream outFile;
    outFile.open(PATH_FREC,ios::in);
    string line;
    smatch m;
    cout << endl;
    string anos = " ";
    while ( getline(file,line) ){
        int found = anos.find(line);
        if(found == string::npos){
            anos += line + "\n";
            //cout << line << endl;
        }
    }
    file.close();

    const char * tex= anos.c_str();
    int min = 0;
    int max = -1;
    for (int i = 0; i < anos.length(); ++i) {
        if (tex[i] == '\n'){
            string palabra = "";
            int aux = max + 1;
            max = i;
            min = aux;
            //primer parametro la posicion y la segunda la cantidad de caracteres
            palabra = anos.substr(min,(max-min));
            palabra = eliminarEsp(palabra);
            //cout << palabra << endl ;
            regex exp3(palabra);
            int cont = 0;
            file.open(PATH_YEARS);
            while ( getline(file,line) ){
                smatch m;
                if(regex_search(line, m, exp3)) {
                    for (auto x : m){
                        cont ++;
                    }
                }
            }
            file.close();
            outFile << palabra << "\t" << cont << endl;
        }
    }

    outFile.close();
}

string eliminarEsp(string origen){
    const char *auxOrigen = origen.c_str();
    string destino;
    for (int i = 0; auxOrigen[i]; ++i) {
        if (!(islower(origen[i]) || isdigit(origen[i]) || isupper(origen[i]))){
            //printf("\nThis character \"%c\" in position  %d is not allowed",origen[i],i+1);
        }else{
            destino += auxOrigen[i];
        }
    }
    return destino;
}
int findBreak(string line){
    int posPunto = 0;
    int posComa  = 0;
    int posEsp   = 0;
    posPunto     = line.find(".");
    posComa     = line.find(",");
    posEsp      = line.find(" ");

    if(posPunto < posComa){
        if (posPunto < posEsp) {
            return posPunto;
        }else{
            return posEsp;
        }
    }else{
        if (posComa < posEsp){
            return posComa;
        }else{
            return posEsp;
        }
    }
}
void getYears(){
    regex exp1("[0-9]{4}");
    ifstream file (PATH_BIB);
    ofstream outFile;
    outFile.open(PATH_YEARS,ios::in);
    string line;
    smatch m;
    while ( getline(file,line) ){

        if (regex_search(line, m, exp1)) {
            for (auto x : m)
                outFile << x.str() << endl;
        }
    }
    outFile.close();
    file.close();
}
string cambiarCar(string origen){
    char remplazo = ' ';
    string aux="";
    const char *auxOrigen = origen.c_str();
    for (int i = 0; auxOrigen[i]; ++i) {
        if (!(auxOrigen[i]>=32 && auxOrigen[i]<=127)){
            aux+= remplazo;
        }else{
            aux+= auxOrigen[i];
        }
    }
    return aux;
}