#include <stdio.h>

void troca(int *x, int *y);

int main(void){
    int a = 5, b = 7;
    troca(&a, &b);
    return 0;
}

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}