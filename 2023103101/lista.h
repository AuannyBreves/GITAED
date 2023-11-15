#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct Lista{
    int *elem;
    int quant;
};

typedef struct Lista lista;

lista * criar_lista(int quant);
void destruir_lista(lista *vetor);
void inserir_elementos(lista *vetor);
void imprimir_elementos(lista *vetor);
int busca_sequencial(lista *vetor, int n, int *c);
void inserir_lista_ordenada(lista *vetor);
int busca_sequencial_ordenada(lista *vetor, int n, int *c);
int busca_binaria(lista *vetor, int n, int *c);
int busca_binaria_recursiva(lista *vetor, int n, int *c, int primeiro, int ultimo);
int maior(lista *vetor);
int menor(lista *vetor);
int soma (lista *vetor);
int produto(lista *vetor);

#endif // LISTA_H_INCLUDED