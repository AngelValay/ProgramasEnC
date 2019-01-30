#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int backcolor=0;

void textcolor( int color)
{
        static HANDLE hConsole;

        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

        SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );
}

int color[7] = {
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F

     };
int main ()
{
    int xy;

    for(int i=0;i<8;i++){


    textcolor(color[i]);
    cout<<"OLA"<<endl;

    }


    return 0;
}
