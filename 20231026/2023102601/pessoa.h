#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

struct Pessoa{
    char nome[50];
    char dataNascimento[30];
    char cpf[30];
};

typedef struct Pessoa pessoa;

void preencher_dados(pessoa *pessoa);
void imprimir_dados(pessoa *pessoa);

#endif // PESSOA_H_INCLUDED