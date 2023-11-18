#include <stdio.h>
#include <time.h>

int maximo(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    int sub_max = maximo(vetor, tamanho - 1);
    if (sub_max > vetor[tamanho - 1]) {
        return sub_max;
    } else {
        return vetor[tamanho - 1];
    }
}

int minimo(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    int sub_min = minimo(vetor, tamanho - 1);
    if (sub_min < vetor[tamanho - 1]) {
        return sub_min;
    } else {
        return vetor[tamanho - 1];
    }
}

int soma(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    return soma(vetor, tamanho - 1) + vetor[tamanho - 1];
}

int produto(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 1;
    }
    return produto(vetor, tamanho - 1) * vetor[tamanho - 1];
}

int main(){
    int tamanho = 5;
    int vetor[tamanho];
    
    //GERAÇÃO ALEATÓRIA DO VETOR
    srand(time(NULL));
    printf("VETOR: ");
    for(int i=0; i<tamanho; i++){
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    
    //TESTE DAS FUNÇÕES
    printf("\n\nMÁXIMO: %d", maximo(vetor, tamanho));
    printf("\nMÍNIMO: %d", minimo(vetor, tamanho));
    printf("\nSOMA: %d", soma(vetor, tamanho));
    printf("\nPRODUTO: %d", produto(vetor, tamanho));
}