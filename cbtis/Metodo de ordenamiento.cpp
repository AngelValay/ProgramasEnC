#include <iostream>
#include <windows.h>
using namespace std;

#define MAX 10

int main(){

int vector[MAX];


int j, i ;
int aux =0;
system("COLOR 3E");

cout<<"Teclea los "<<MAX<<" valores para ordenar :"<<endl;

for(i=0;i<MAX;i++){
     cout<<i<<" = ";
     cin >> vector[i];
     cout<<endl;
 }

/*metodo de burbuja*/
for(i=0; i<(MAX-1); i++) {
     for (j=i+1; j<MAX; j++) {
        if(vector[j]<vector[i]) {
            aux=vector[j];
            vector[j]=vector[i];
            vector[i]=aux;
        }
     }
  }
  cout<<"El vector ordenado es:"<<endl;

  for (i=0; i<MAX; i++){
  cout<<vector[i]<<endl;
  }

  return 0;

}
