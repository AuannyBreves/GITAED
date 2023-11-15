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
void inserir_elemento_ordenado(lista *vetor, int n);
void imprimir_elementos(lista *vetor);
void imprimir_elementos_recursivo(lista *vetor, int i);
void inserir_lista_ordenada(lista *vetor);
int busca_binaria_recursiva(lista *vetor, int n, int *c, int primeiro, int ultimo);
int maior_recursivo(lista *vetor, int i, int maior);
int menor_recursivo(lista *vetor, int i, int menor);
int soma_recursivo(lista *vetor, int i);
int produto_recursivo(lista *vetor, int i);

#endif // LISTA_H_INCLUDED