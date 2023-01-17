#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
    char elem;
    struct treeNode *left;
    struct treeNode *rigth;
} treeNode;

treeNode *initialize(void);
treeNode *newNode(char ch);
void printT(treeNode *node, int tab);
void depth(treeNode *a);

int main(void) {
    treeNode *root;
    root = newNode('A');
    root->left = newNode('B');
    root->rigth = newNode('C');
    root->rigth->left = newNode('D');
    root->rigth->rigth = newNode('E');
    printT(root, 0);
    printf("\n");
}

treeNode *initialize(void) {
    return NULL;
}

treeNode *newNode(char c) {
    treeNode *new;
    new = (treeNode *) malloc(sizeof(treeNode));
    new->elem = c;
    new->left = NULL;
    new->rigth = NULL;
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
        printT(node->rigth, tab + 2);
    } else printf("vazio");
}

void depth(treeNode *a){
    if(a == NULL)
        return;
    printf("%c\n", a->elem);
    depth(a->left);
    depth(a->rigth);
}