#include <stdio.h>

typedef struct NO{
    int info;
    struct NO *prox;
}pilha;

pilha *push(pilha *topo, int elem);
int *pop(pilha *topo);

int main(void){
    pilha *topo;
    topo = NULL;
    return 0;
}

pilha *push(pilha *topo, int elem){
    pilha *el;
    el = (pilha*)malloc(sizeof(pilha));
    el->prox = topo;
    topo = el;
    return topo;
}

