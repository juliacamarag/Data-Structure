#include <stdio.h>

typedef struct ponto2d {
    float x;
    float y;
} ponto2d;

int main(void) {
    ponto2d p; 
    scanf ("%f %f", &p.x, &p.y);
    printf("ponto: (%.2f %.2f)\n", p.x, p.y);

    return 0;
}