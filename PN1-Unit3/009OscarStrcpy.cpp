#include <iostream>
char *strcpyOscar(char *,char *, int);
int main() {
    int x = 0;
    int *y = &x;
    *y = 9;
    printf("%p\n",&x);
    printf("%p\n",y);
    printf("%d",x);
    return 0;
}
