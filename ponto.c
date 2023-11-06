#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

ponto * criar_ponto(float x, float y){
    ponto *ponto = malloc(sizeof(ponto));
    ponto -> x = x;
    ponto -> y = y;
    return ponto;
}

void destruir_ponto(ponto *pt){
    free(pt);
}

void acessar_ponto(ponto *pt, float *x, float *y){
    *x = pt -> x;
    *y = pt -> y;
}

void atribuir_ponto(ponto *pt, float x, float y){
    pt -> x = x;
    pt -> y = y;
}

float distancia_pontos(ponto *pt1, ponto *pt2){
    float dx = pt1 -> x - pt2 -> x;
    float dy = pt1 -> y - pt2 -> y;
    float dist = sqrt(dx * dx + dy * dy);
    return dist;
}