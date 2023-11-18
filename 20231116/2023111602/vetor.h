#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED

struct Vetor{
    float x;
    float y;
    float z;
};

typedef struct Vetor vetor;

vetor * criar_vetor(float x, float y, float z);
void soma_vetores(vetor *v1, vetor *v2, vetor *resultado);
float produto_escalar(vetor *v1, vetor *v2);

#endif // VETOR_H_INCLUDED