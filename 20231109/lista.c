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

void inserir_elemento_ordenado(lista *vetor, int n) {
    int i=0;
    while (i < vetor->quant && n > vetor->elem[i]) {
        i++;
    }
    
    for (int j = vetor->quant-1; j >= i; j--) {
        vetor->elem[j+1] = vetor->elem[j];
    }
    
    vetor->elem[i] = n;
    vetor->quant++;
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
      
void imprimir_elementos_recursivo(lista *vetor, int i) {
    if (i < vetor->quant) {
        if (i == 0) {
            printf("\nLista: [%d, ", vetor->elem[i]);
        } else if(i == vetor->quant-1) {
            printf("%d]", vetor->elem[i]);
        } else if(i < vetor->quant){
            printf("%d, ", vetor->elem[i]);
        }
        imprimir_elementos_recursivo(vetor, i+1);
    }
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

int maior_recursivo(lista *vetor, int i, int maior) {
    if (i == vetor->quant) {
        return maior;
    }    
    if (vetor->elem[i] > maior) {
        maior = vetor->elem[i];
    }    
    return maior_recursivo(vetor, i+1, maior);
}

int menor_recursivo(lista *vetor, int i, int menor) {
    if (i == vetor->quant) {
        return menor;
    }    
    if (vetor->elem[i] < menor) {
        menor = vetor->elem[i];
    }    
    return menor_recursivo(vetor, i+1, menor);
}

int soma_recursivo(lista *vetor, int i) {
    if (i == vetor->quant) {
        return 0;
    }   
    return vetor->elem[i] + soma_recursivo(vetor, i+1);
}

int produto_recursivo(lista *vetor, int i) {
    if (i == vetor->quant) {
        return 1;
    } 
    return vetor->elem[i] * produto_recursivo(vetor, i+1);
}