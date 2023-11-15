#include "lista.c"

int main(void){
    int busca, pos, tamanho;
    int *c;
    
    // CRIAR, INSERIR E IMPRIMIR LISTA1
    printf("Qual o tamanho da sua lista? ");
    scanf("%d", &tamanho);
    lista * lista1 = criar_lista(tamanho);
    inserir_elementos(lista1);
    printf("IMPRIMINDO INTERATIVO");
    imprimir_elementos(lista1);
    printf("\nIMPRIMINDO RECURSIVO");
    imprimir_elementos_recursivo(lista1, 0);
    
    // OPERAÇÕES LISTA1
    printf("\nOPERAÇÕES: ------------------------------------------");
    printf("\nMaior valor: %d", maior_recursivo(lista1, 0, 0));
    printf("\nMenor valor: %d", menor_recursivo(lista1, 0, 1000));
    printf("\nSoma: %d", soma_recursivo(lista1, 0));
    printf("\nProduto: %d", produto_recursivo(lista1, 0));
    
    //DESTRUINDO LISTA1
    destruir_lista(lista1);
    printf("\n\nDESTRUINDO LISTA: ------------------------------------------\nLista1 liberada.");
    
    // CRIAR, INSERIR E IMPRIMIR LISTA2
    lista * lista2 = criar_lista(30);
    inserir_lista_ordenada(lista2);
    printf("\n\nBUSCA L2: ------------------------------------------");
    imprimir_elementos_recursivo(lista2, 0);

     // BUSCA NÚMERO COM BINÁRIA RECURSIVA LISTA2
    printf("\n\nQual valor existente deseja buscar? ");
    scanf("%d", &busca);
    
    pos = busca_binaria_recursiva(lista2, busca, c, 0, lista2->quant-1);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: Não encontrado.\n", *c);
    }
    
    // BUSCA NÚMERO NÃO EXISTENTE BINÁRIA RECURSIVA LISTA2
    printf("\nQual valor não existente deseja buscar? ");
    scanf("%d", &busca);
    
    pos = busca_binaria_recursiva(lista2, busca, c, 0, lista2->quant-1);
    if (pos != -1){
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: %d\n", *c, pos);
    } else {
        printf("COMPARAÇÕES: %d    BUSCA BINÁRIA RECURSIVA: Não encontrado.\n", *c);
    }    
        // INSERINDO UM NÚMERO ALEATÓRIO DE FORMA ORDENADA
    int n = rand()%100;
    inserir_elemento_ordenado(lista2, n);
    printf("\nElemento %d inserido:", n);
    imprimir_elementos_recursivo(lista2, 0);
}