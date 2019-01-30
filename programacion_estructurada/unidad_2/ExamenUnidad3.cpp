#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string texto = "Mi nombre es: Angel Valay";
    regex mi_expresion(":[A-Za-z ]+");
    smatch coinci;
    if(regex_search(texto, coinci, mi_expresion)){
        for (string coin : coinci){
            cout << coin << endl;
        }
    }
    return 0;
}
