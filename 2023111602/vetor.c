#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

vetor * criar_vetor(float x, float y, float z){
    vetor * v = malloc(sizeof(vetor));
    v -> x = x;
    v -> y = y;
    v -> z = z;
    return v;
}

void soma_vetores(vetor *v1, vetor *v2, vetor *resultado){
    resultado -> x = v1->x + v2->x;
    resultado -> y = v1->y + v2->y;
    resultado -> z = v1->z + v2->z;
}

float produto_escalar(vetor *v1, vetor *v2){
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}