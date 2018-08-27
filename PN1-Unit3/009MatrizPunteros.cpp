#include <iostream>
void strcpy(char *,char *, int, int);
int main() {
    //std::cout << "Hello, World!" << std::endl;
    char letras[3][2] = {'a','c','a','b','e','r'};
    char letrasN[3][2];
    strcpy((char *)letrasN,(char *)letras,3,2);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%c\t",letras[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%c\t",letrasN[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void strcpy(char *matrizDes,char *matrizOrig,int x, int y){
    for (int i = 0; i < x*y; ++i) {
        matrizDes[i] = matrizOrig[i];
    }
}