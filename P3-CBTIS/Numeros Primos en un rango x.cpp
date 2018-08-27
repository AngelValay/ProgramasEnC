#include<iostream>
#include <windows.h>

using namespace std;
int num=0,c=0,c2=0,res=0,nc=0;


int main()
{

  cout<<"Introduce el limite de numeros: "; cin>>num;

  cout<<"Validando.";
    for(int i=1;i<=5;i++){
        cout<<".";
        Sleep (100);

    }
    cout<<"."<<endl;

  for(c = 1;c <=  num; c++)
  {
    for(c2 = 1; c2 <= c ; c2 ++)
    {
      res = c%c2;
      if( res == 0)
      {
        nc = nc +1;
      }
    }
    if(nc == 2)
    {
      cout<<"  "<<c;
    }

    nc=0;
  }
}
