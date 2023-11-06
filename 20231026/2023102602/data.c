#include <stdio.h>
#include <stdlib.h>
#include "data.h"

void preencher_data(data *dt){
    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%s", dt -> data);
}

void imprimir_data(data *dt){
    printf("Data registrada: ");
    printf("%s", dt -> data);
}