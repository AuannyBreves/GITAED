#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

lista * criar_lista(int quant){
    lista *vetor = malloc(sizeof(lista));
    vetor -> elem = malloc(quant * sizeof(int));
    vetor -> quant = quant;
    return vetor;
}

void destruir_lista(lista *vetor){
    free(vetor -> elem);
    free(vetor);
}

void inserir_elementos(lista *vetor){   
    srand(time(NULL));
    for(int i=0; i < vetor->quant; i++){
        vetor -> elem[i] = rand() % 10;
    }
}
    
void imprimir_elementos(lista *vetor){
    printf("\nLista: [");
    for(int i=0; i < vetor->quant; i++){
        if(i != vetor->quant-1){
            printf("%d, ", vetor->elem[i]);
        } else {
            printf("%d]", vetor->elem[i]);
        }
    }
}
    
int busca_sequencial(lista *vetor, int n, int *c){
    *c = 0;
    for(int i=0; i < vetor->quant; i++){
        *c += 1;
        if(vetor->elem[i] == n){
            return i+1;
        }
    }
    return -1;
}

void inserir_lista_ordenada(lista *vetor){
    srand(time(NULL));
    for(int i=0; i < vetor->quant; i++){
        if(i==0){
            vetor -> elem[i] = rand() % 10;
        } else {
            vetor -> elem[i] = vetor -> elem[i-1]+rand()%10;
        }
    }
}

int busca_sequencial_ordenada(lista *vetor, int n, int *c){
    *c = 0;
    for(int i=0; i < vetor->quant; i++){
        *c += 1;
        if(vetor->elem[i] >= n){
            if(vetor->elem[i] == n){
                return i+1;
            }
        }
    }
    return -1;
}

int busca_binaria(lista *vetor, int n, int *c){
    int primeiro=0, ultimo=vetor -> quant-1, meio=-1;
    *c = 0;
    while(primeiro <= ultimo){
        meio = primeiro + (ultimo-primeiro)/2;
        *c += 1;
        if(n == vetor->elem[meio]){
            return meio+1;
        } else if(n > vetor->elem[meio]){
            primeiro = meio + 1;
        } else {
            ultimo = meio -1;
        }
    }
    return -1;
}

    int busca_binaria_recursiva(lista *vetor, int n, int *c, int primeiro, int ultimo){
        if(primeiro == 0){
            *c = 0;
        }
        *c += 1;
        if(primeiro > ultimo){
            return -1;
        } else {
            int meio = primeiro + (ultimo-primeiro)/2;
            if(n == vetor->elem[meio]){
                return meio+1;
            } else if(n > vetor->elem[meio]){
                return busca_binaria_recursiva(vetor, n, c, meio+1, ultimo);
            } else {
                return busca_binaria_recursiva(vetor, n, c, primeiro, meio-1);
            }
        }
}

int maior(lista *vetor){
    int maior = 0;
    for(int i=0; i < vetor->quant; i++){
        if(vetor->elem[i] > maior){
            maior = vetor->elem[i];
        }
    }
    return maior;
}

int menor(lista *vetor){
    int menor = 1000;
    for(int i=0; i < vetor->quant; i++){
        if(vetor->elem[i] < menor){
            menor = vetor->elem[i];
        }
    }
    return menor;
}

int soma(lista *vetor){
    int soma = 0;
    for(int i=0; i < vetor->quant; i++){
        soma += vetor->elem[i];
    }
    return soma;
}

int produto(lista *vetor){
    int prod = 1;
    for(int i=0; i < vetor->quant; i++){
        prod *= vetor->elem[i];
    }
    return prod;
}