#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int k = 0;
    long int p = 0;
    long int n=-1;
    long int aux;
    long int N = 1;
    cin >> p;
    cin >> k;
    do{
        aux = floor(N/k)*3 + floor(N/3);
        if(aux == p){
            n=N;
            break;
        }
        N++;
    }while(N<=1000000);
    cout << n;
    return 0;
}
