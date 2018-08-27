#include <iostream>
using namespace std;
float her,her2,her3,her1;
int main ()
{
    cout<<"Ingresa la herencia: "; cin>>her;
    her1 = her * 0.35;
    her2 = her * 0.25;
    her3 = her * 0.40;
    cout<<"Primer Persona recibe $"<<her1<<endl;
    cout<<"Segunda Persona Recibe $"<<her2<<endl;
    cout<<"Tercer Persona Recibe $"<<her3<<endl;
    return 0;
}
