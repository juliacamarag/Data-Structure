#include <stdio.h>

int main(void ){
    int a, *p;
    a = 5;
    p = &a;
    *p = 6;

    printf("endereco de p: %p \n", &p);
    printf("endereco de a: %p \n", &a);
    printf("endereco que está em p: %p", p);
    printf("conteudo da variavel apontada por p: %p", p);

    return 0;
}