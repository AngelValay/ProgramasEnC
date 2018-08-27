#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main(){
    int ran;
    int a;
    srand(time(0));
    for(a=0;;a++){
        ran = 5 + rand()%(16-5);
        printf("%6d ",ran);
        Sleep(500);
    }

}
