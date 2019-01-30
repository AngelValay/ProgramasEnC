#include <iostream>

int main() {
    int array[5] = {100,200,300,400,500};
    printf("Con notaciones de indices\n");
    for (int i = 0; i<5; i++) {
        printf("array[%d] = %d\t%p\n",i,array[i],&array[i]); //&array[0] obtiene la direccion de memoria
    }
    //con notaciones de indices
    printf("Con notaciones de punteros\n");
    printf("array = %p",array); //el nombre solo del arreglo es el puntero
    for (int j = 0; j < 5; ++j) {
        printf("\narray indireccionado = %d\t%p",*(array + j),array + j); //ir a la caja del arreglo
    }
    return 0;
}