#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

struct Ponto{
    float x;
    float y;
};

typedef struct Ponto ponto;

ponto * criar_ponto(float x, float y);
void destruir_ponto(ponto *pt);
void acessar_ponto(ponto *pt, float *x, float *y);
void atribuir_ponto(ponto *pt, float x, float y);
float distancia_pontos(ponto *pt1, ponto *pt2);

#endif // PONTO_H_INCLUDED