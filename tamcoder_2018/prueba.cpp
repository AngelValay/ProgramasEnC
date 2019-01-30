#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long int n = 0;
    long int sum = 0;
    long int i = 0;
    cin >> n ;

    while(n>0){
        //scanf("%i",&i);
        cin >> i;
        sum+=i;
        n--;
    }
    cout << sum << endl;
}
