#include <iostream>
int main() {
    //TOMAMOS LA MATRIZ DEL EJEMPLO
    double matriz[5][3]={1,     2,      3,
                         4,     5,      6,
                         7,     8,      9,
                         0,     0,      0,
                         0,     0,      0};
    //INICIALIZO EN 1 LAS VARIABLES DONDE SE GUARDARA LOS RESULTADDOS DE CADA DIAGONAL
    double diagonal[3]={1,1,1};
    double diagonalInv[3]={1,1,1};
    double res = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i + 3][j] = matriz[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j) {
                diagonal[0] *= matriz[i][j];
                diagonal[1] *= matriz[i + 1][j];
                diagonal[2] *= matriz[i + 2][j];
            }
            if (2 - i == j) {
                diagonalInv[0] *= matriz[i][j];
                diagonalInv[1] *= matriz[i + 1][j];
                diagonalInv[2] *= matriz[i + 2][j];
            }
        }
    }
    res = diagonal[0] + diagonal[1] + diagonal[2] - diagonalInv[0] - diagonalInv[1] - diagonalInv[2];
    printf("res: %lf",res);
    return 0;
}