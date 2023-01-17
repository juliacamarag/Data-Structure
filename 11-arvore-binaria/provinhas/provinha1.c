/* Fazer as implementações *recursivas* para percorrer a árvore em ordem simétrica e pós-ordem */

#include <stdio.h>
#include <stdlib.h>


typedef struct treeNode {
    char elem;
    struct treeNode *left;
    struct treeNode *right;
}treeNode;

treeNode *newNode(char c);
void printT(treeNode *node, int tab);
void simetrica(treeNode *a);
void posOrdem(treeNode *a);

int main(void) {
    treeNode *root;
    root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');
    root->right->left = newNode('D');
    root->right->right = newNode('E');
    printT(root, 0);
    printf("\n");

    printf("\n--- Percorrendo de Forma Simetrica ---\n");
    simetrica(root);
    printf("\n\n--- Percorrendo em Pos-Ordem ---\n");
    posOrdem(root);
}

treeNode *newNode(char c) {
    treeNode *new;
    new = (treeNode *) malloc(sizeof(treeNode));
    new->elem = c;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void printT(treeNode *node, int tab) {
    for (int i = 0; i < tab; i++) {
        printf("-");
    }
    if (node != NULL) {
        printf("%c\n", node->elem);
        printT(node->left, tab + 2);
        printf("\n");
        printT(node->right, tab + 2);
    } else printf("vazio");
}

void simetrica(treeNode *a){
    if(a != NULL){
        simetrica(a->left);
        printf("%c --> ", a->elem);
        simetrica(a->right);
    }
}

void posOrdem(treeNode *a){
    if(a != NULL){
        posOrdem(a->left);
        posOrdem(a->right);
        printf("%c --> ", a->elem);
    }
}