#include <stdio.h>

typedef struct lista{
    int elem;
    struct lista *prox;  
}tlist;

typedef struct pilha{
    tlist *topo;
}tpilha;

tpilha *inicializa();
int pilha_vazia(tpilha *p);
tpilha *push(tpilha *topo, int elem);
tpilha *pop(tpilha *topo);
tpilha *peek(tpilha *topo);
void imprime_pilha(tpilha *topo);

int main(void){
    tpilha *pil = inicializa();
    push(pil, 5);
    printf("topo: %d\n", peek(pil));
    push(pil, 4);
    printf("topo: %d/n", peek(pil));
    push(pil, 3);
    int info = pop(pil);


    return 0;
}

tpilha *inicializa(){
    tpilha *p;
    p = (tpilha *)malloc(sizeof(tpilha));
    return p;
}

int pilha_vazia(tpilha *p){
    return p == NULL;
}

tpilha *push(tpilha *topo, int elem){

}

tpilha *pop(tpilha *topo){

}

tpilha *peek(tpilha *topo){

}