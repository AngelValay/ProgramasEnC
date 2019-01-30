#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int potencia (int, int);

int main(){
    int N = 0;
    float H = 0;
    float W = 0;
    int i = 0, j = 0;

    scanf("%i %f %f",&N,&H,&W);
    float numeros[N];
    float oper = 0;
    for(int n = 0; n < N; n++){
        numeros[n] = pow(2,n);
    }
    for(i=0;i<potencia(2,N);i++){
        oper = 0;
        for(j=0;j<N;j++){
          if(i & (1<<j)){
            cout<<numeros[j] << "\t";
            oper+= numeros[j]*numeros[j];
          }
        }
        cout << oper << endl;
        cout<<"\t";
    }
    return 0;

}

int potencia(int b,int e){
    int i;
    int pot=1;
    for(i=1;i<=e;i++){
          pot=pot*b;
    }
    return pot;
}
