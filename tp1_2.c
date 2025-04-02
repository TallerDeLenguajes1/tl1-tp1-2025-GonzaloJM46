#include <stdio.h>

int cuadrado(int x);
void cuadradoVacio(int x);
void usoVariable(int x);
void invertir(int a, int b);
void orden(int a, int b);

int main(){

    int numero = 3, numero_cuad, nro1 = 2, nro2 = 4;

    numero_cuad = cuadrado(numero);

    printf("\n%d ", numero_cuad);

    cuadradoVacio(numero);

    usoVariable(numero);

    invertir(nro1, nro2);

    orden(nro1, nro2);

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

void usoVariable(int x){
    printf("\n%p ", &x);
    printf("\n%d", x);
}

void invertir(int a, int b){
    int burbuja;
    burbuja = a;
    a = b;
    b = burbuja;
    printf("\n%d ", a);
    printf("\n%d ", b);
}

void orden(int a, int b){
    if(a < b){
        printf("\n valor mas chico: %d", a);
        printf("\n valor mas grande: %d", b);
    } else{
        printf("\n valor mas chico: %d", b);
        printf("\n valor mas grande: %d", a);
    }
}