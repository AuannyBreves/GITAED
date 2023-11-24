#include "lista_sequencial.c"

int main() {
    // CRIA A LISTA
    ListaSequencial * L1;
    criarLista(L1);
    
    // PREENCHE COM 10 ELEMENTOS ALEATÓRIOS
    preencherListaOrdenada(L1, 10);
    printf("Lista: [ ");
    imprimirLista(*L1);
    printf("]\n");
    
    // INSERE UM ELEMENTO ORDENADO
    Registro randomNum1;
    randomNum1.chave = rand() % 100;
    inserirElementoOrdenado(L1, randomNum1);    
    printf("\nElemento Inserido (ORDENADO): %d\n", randomNum1.chave);
    printf("Nova Lista: [ ");
    imprimirLista(*L1);
    printf("]\n");
    
    // INSERE UM ELEMENTO NO FINAL
    Registro randomNum2;
    randomNum2.chave = rand() % 100;
    inserirElementoFinal(L1, randomNum2);    
    printf("\nElemento Inserido (FINAL): %d\n", randomNum2.chave);
    printf("Nova Lista: [ ");
    imprimirLista(*L1);
    printf("]\n");
    
    // ELIMINA UM ELEMENTO PELA CHAVE
    eliminarElemento(L1, randomNum1.chave);
    printf("\nElemento Retirado: %d\n", randomNum1.chave);
    printf("Nova Lista: [ ");
    imprimirLista(*L1);
    printf("]\n");
    
    eliminarElemento(L1, randomNum2.chave);
    printf("\nElemento Retirado: %d\n", randomNum2.chave);
    printf("Nova Lista: [ ");
    imprimirLista(*L1);
    printf("]\n");
}