#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

void preencher_dados(pessoa *pessoa) {
    printf("Digite o nome: ");
    fgets(pessoa -> nome, 50, stdin);
    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    fgets(pessoa -> dataNascimento, 30, stdin);
    printf("Digite o CPF: ");
    fgets(pessoa -> cpf, 30, stdin);
}

void imprimir_dados(pessoa *pessoa) {
    printf("\nDados Preenchidos:\n");
    printf("Nome: %s", pessoa -> nome);
    printf("Data de Nascimento: %s", pessoa -> dataNascimento);
    printf("CPF: %s", pessoa -> cpf);
}