#include <stdio.h>

void incr_vetor (int n, int *v) {
    int i;
    for (i=0; i<n; i++)
        v[i]++;
}

int main(void){
    int vet=(3, 4, 7);
    incr_vetor(2,vet);
    return 0;
}