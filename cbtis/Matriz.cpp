#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a,b;
    int i,j;
    float n;
    int matriz[100][100];
    cout<<"X  =   "; cin>>a;
    cout<<"Y  =   "; cin>>b;
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
           cout<<"Ingresa un valor: "; cin >> n;
           matriz[i][j]=n;
        }
    }
    cout<<"\n";
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
           cout<<matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    system("pause(null)");
    return 0;
}
