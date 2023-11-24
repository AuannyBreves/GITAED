#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_sequencial.h"

void criarLista(ListaSequencial *lista) {
    lista->tamanho = 0;
}

int inserirElementoOrdenado(ListaSequencial *lista, Registro elemento) {
    if (lista->tamanho >= MAX) {
        return 0;
    }
    int i;
    for (i = lista->tamanho; i > 0 && lista->dados[i-1].chave > elemento.chave; i--) {
        lista->dados[i] = lista->dados[i-1];
    }
    lista->dados[i] = elemento;
    lista->tamanho++;
    return 1;
}

int inserirElementoFinal(ListaSequencial *lista, Registro elemento) {
    if (lista->tamanho >= MAX) {
        return 0;
    }
    lista->dados[lista->tamanho] = elemento;
    lista->tamanho++;
    return 1;
}

int eliminarElemento(ListaSequencial *lista, int chave) {
    if (lista->tamanho == 0) {
        return 0;
    }
    int i;
    for (i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i].chave == chave) {
            int j;
            for (j = i; j < lista->tamanho-1; j++) {
                lista->dados[j] = lista->dados[j+1];
            }
            lista->tamanho--;
            return 1;
        }
    }
    return 0;
}

void imprimirLista(ListaSequencial lista) {
    int i;
    for (i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.dados[i].chave);
    }
}

// FUNÇÃO AUXILIAR PARA PREENCHER A LISTA
void preencherListaOrdenada(ListaSequencial *lista, int tamanho) {
    lista->tamanho = 0;
    srand(time(NULL)); 
    for (int i = 0; i < tamanho; i++) {
        Registro elemento;
        elemento.chave = rand() % 100;
        int j;
        for (j = lista->tamanho; j > 0 && lista->dados[j-1].chave > elemento.chave; j--) {
            lista->dados[j] = lista->dados[j-1];
        }
        lista->dados[j] = elemento;
        lista->tamanho++;
    }
}