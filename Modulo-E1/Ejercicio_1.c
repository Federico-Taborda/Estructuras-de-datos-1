#include <stdio.h>

#define X 5
#define Y 4

float mediana(float *arreglo, int longitud) {
    int par = longitud % 2 == 0 ? 1 : 0;
    float mediana = 0;

    if(par) {
        mediana = arreglo[longitud / 2] + arreglo[(longitud / 2) - 1];
        mediana /= 2;
    }else{
        mediana = arreglo[longitud / 2];
    }


    return mediana;
}

int main() {
    float arr1[X] = {-1.0, 2.2, 2.9, 3.1, 3.5};
    float arr2[Y] = {-1.0, 2.2, 2.9, 3.1};

    printf("Mediana de arr1: %f\n", mediana(arr1, X));
    printf("Mediana de arr2: %f\n", mediana(arr2, Y));
    return 0;
}

