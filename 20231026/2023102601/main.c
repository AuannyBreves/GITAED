#include "pessoa.c"

int main(void) {
    pessoa * pessoa1 = malloc(sizeof(pessoa));
    preencher_dados(pessoa1);
    imprimir_dados(pessoa1);
    return 0;
}