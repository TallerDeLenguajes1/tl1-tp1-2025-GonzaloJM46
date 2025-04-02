#include <stdio.h>

int cuadrado(int x);
void cuadradoVacio(int x);

int main(){

    int numero = 3, numero_cuad;

    numero_cuad = cuadrado(numero);

    printf("\n%d ", numero_cuad);

    cuadradoVacio(numero);

    return 0;
}

int cuadrado(int x){
    int i, cuad = 0;

    for(i = 0; i < x; i++){
        cuad = cuad + x;
    }

    return cuad;
}

void cuadradoVacio(int x){
    int i, cuad = 0;

    printf("\n%d ", x*x);
}