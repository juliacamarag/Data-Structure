#include <stdio.h>

#define MAX 100

typedef struct FILA {
    int dado[MAX];
    int inicio, fim, total;
}tfila;

int vazia(tfila *f, int elem);
void insere(tfila *f, int elem);

int main(void){

    return 0;
}

int vazia(tfila *f, int elem){
    return f->inicio == NULL;
}

/* void insere(tfila  ) */