#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    double x, y;
    char s;
    cin >>x >> s >> y;
    switch(s){
        case '+' : {cout<<"= "<<x+y<<endl;break;}
        case '-' : {cout<<"= "<<x-y<<endl;break;}
        case '*' : {cout<<"= "<<x*y<<endl;break;}
        case '/' : {cout<<"= "<<x/y<<endl;break;}

        default : break;
    }

    return 0;
}
