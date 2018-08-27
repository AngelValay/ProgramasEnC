#include <iostream>
int suma(int);
int pedirValor();
void esAmigo(int, int, int, int);
int main() {
    int x = pedirValor();
    int y = pedirValor();
    int sumX=0,sumY=0;

    sumX = suma(x);
    sumY = suma(y);

    esAmigo(x,y,sumX,sumY);
    return 0;
}
int suma(int x){
    int sum  = 0;
    for (int j = 1; j < x; ++j) {
        if(x%j==0)
            sum+=j;
    }
    return sum;
}
int pedirValor(){
    int x;
    printf("NUMERO: ");
    scanf("%d",&x);
    if(x<1)
        pedirValor();
    else
        return x;
}
void esAmigo(int x, int y, int sumX, int sumY){
    printf("%d - %d\n",sumX,sumY);
    if(sumX==y && sumY==x && y!=x)
        printf("Son numeros amigos");
    else
        printf("No son numeros amigos");
}