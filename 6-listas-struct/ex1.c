#include <stdio.h>

typedef struct lista {
    int info;
    struct lista *prox;
}tlist;

tlist **criaLista(tlist **L);
int vazia(tlist *L);
tlist *insereElem_start(tlist *L, int elem);
tlist *insereElem_end(tlist *L, int elem);
void printL(tlist *L);


int main(void){


}

tlist **criaLista(tlist **L){
    (*L) = NULL;
}

int vazia(tlist *L){
    return L == NULL;
}

tlist *insereElem(tlist *L, int i){

}

void printL(tlist *L){      // Recursiva
    if (vazia(L)) {
        return;
    }
    printL(L->prox);
}


