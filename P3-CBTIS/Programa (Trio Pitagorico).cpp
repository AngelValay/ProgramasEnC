#include <iostream>

using namespace std;

main(){
    bool encontrado= true;
    for(int a =1;a<333 && !encontrado;a++){
        for(int b =1;a<666 && !encontrado;b++){
        for(int c =1;a<999 && !encontrado;c++){
        if(a+b+c == 1000){
                if(a*a +b*b == c*c){
            cout<<"a = "<<a<<"\n b = "<<"\n c = "<<c<<endl;
            encontrado = true;
                }
        }
    }
    }
    }
    return 0;
}
