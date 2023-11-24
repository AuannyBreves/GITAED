#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H
#define MAX 1000

struct registro {
    int chave;
};

typedef struct registro Registro;

struct listaSequencial {
    Registro dados[MAX];
    int tamanho;
};

typedef struct listaSequencial ListaSequencial;

void criarLista(ListaSequencial *lista);
int inserirElementoOrdenado(ListaSequencial *lista, Registro elemento);
int inserirElementoFinal(ListaSequencial *lista, Registro elemento);
int eliminarElemento(ListaSequencial *lista, int chave);
void imprimirLista(ListaSequencial lista);
void preencherListaOrdenada(ListaSequencial *lista, int tamanho); // FUNÇÃO AUXILIAR PARA PREENCHER A LISTA

#endif // LISTA_SEQUENCIAL_H