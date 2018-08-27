// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

string printFile(string);
void writeFile(string);
string sendText(string);
int main () {
    printFile("C:\\Users\\angel\\Desktop\\kjjj.pdf");
    printf("\n");
    writeFile("C:\\Users\\angel\\Desktop\\kjjj.pdf");
    return 0;
}
string printFile(string URL){
    string line;
    ifstream myfile (URL);
    if (myfile.is_open()) {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";
    return "hola";
}
void writeFile(string URL){
    ofstream myfile;
    myfile.open (URL);
    myfile << "Hola Mundo.\n";
    myfile.close();
};