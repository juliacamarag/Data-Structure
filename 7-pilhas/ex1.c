#include <stdio.h>

#define MAX 100

typedef struct pilha {
    int dado[MAX];
    int topo;
} tpilha;

void push(tpilha *p, int elem);
int pop(tpilha *p);

int main (void){
    tpilha p;
    p.topo = -1;
    return 0;

    push(&p, 6);
    push(&p, 5);
    pop(&p);
}

void push(tpilha *p, int elem){
    if(p->topo < MAX-1){
        p->topo++;
        p->dado[p->topo] = elem;
    }
}

int pop(tpilha *p) {
    int elem;

    if(p->topo >= 0){
        elem = p->dado[p->topo];
        p->topo--;
    }

    return elem;
}