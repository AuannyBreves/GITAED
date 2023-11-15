#include "lista.c"

int main(void){
    int busca, pos, tamanho;
    int *c;
    
    // CRIAR, INSERIR E IMPRIMIR LISTA1
    printf("Qual o tamanho da sua lista? ");
    scanf("%d", &tamanho);
    lista * lista1 = criar_lista(tamanho);
    inserir_elementos(lista1);
    printf("\n\nBUSCA L1: ------------------------------------------");
    imprimir_elementos(lista1);
    
    // BUSCA SEQUENCIAL LISTA1
    printf("\n\nQual valor existente deseja buscar? ");
    scanf("%d", &busca);
    pos = busca_sequencial(lista1, busca, c);
    if (pos != -1){
        printf("BUSCA SEQUENCIAL: %d\n", pos);
    } else {
        printf("BUSCA SEQUENCIAL: Não encontrado.\n");
    }    
    printf("\nQual valor não existente deseja buscar? ");
    scanf("%d", &busca);
    pos = busca_sequencial(lista1, busca, c);
    if (pos != -1){
        printf("BUSCA SEQUENCIAL: %d\n", pos);
    } else {
        printf("BUSCA SEQUENCIAL: Não encontrado.\n");
    }
    
    // OPERAÇÕES LISTA1
    printf("\nOPERAÇÕES: ------------------------------------------");
    printf("\nMaior valor: %d", maior(lista1));
    printf("\nMenor valor: %d", menor(lista1));
    printf("\nSoma: %d", soma(lista1));
    printf("\nProduto: %d", produto(lista1));
    
    // CRIAR, INSERIR E IMPRIMIR LISTA2
    lista * lista2 = criar_lista(30);
    inserir_lista_ordenada(lista2);
    printf("\n\nBUSCA L2: ------------------------------------------");
    imprimir_elementos(lista2);

     // BUSCA NÚMERO EXISTENTE LISTA2
    printf("\n\nQual valor existente deseja buscar? ");
    scanf("%d", &busca);
    pos = busca_sequencial(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL: Não encontrado.\n", *c);
    }
    
    pos = busca_sequencial_ordenada(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL ORDENADA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL ORDENADA: Não encontrado.\n", *c);
    }
 
    pos = busca_binaria(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA: Não encontrado.\n", *c);
    }
    
    pos = busca_binaria_recursiva(lista2, busca, c, 0, lista2->quant-1);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: Não encontrado.\n", *c);
    }
    
    // BUSCA NÚMERO NÃO EXISTENTE LISTA2
    printf("\nQual valor não existente deseja buscar? ");
    scanf("%d", &busca);
    pos = busca_sequencial(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL: Não encontrado.\n", *c);
    }
    
    pos = busca_sequencial_ordenada(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL ORDENADA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA SEQUENCIAL ORDENADA: Não encontrado.\n", *c);
    }
 
    pos = busca_binaria(lista2, busca, c);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA: Não encontrado\n", *c);
    }
    
    pos = busca_binaria_recursiva(lista2, busca, c, 0, lista2->quant-1);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: Não encontrado.\n", *c);
    }
}