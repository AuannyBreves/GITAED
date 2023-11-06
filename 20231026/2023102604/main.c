#include "complexo.c"

int main(void) {
    // CRIAÇÃO DOS NÚMEROS COMPLEXOS
    complexo * z1 = criar_complexo(2, 3);
    complexo * z2 = criar_complexo(4, -1);

    // USO DAS FUNÇÕES DE OPERAÇÕES
    somar_complexos(z1, z2);
    subtrair_complexos(z1, z2);
    multiplicar_complexos(z1, z2);
    dividir_complexos(z1, z2);

    // DESTRUIÇÃO DOS NÚMEROS COMPLEXOS
    destruir_complexo(z1);
    destruir_complexo(z2);

    return 0;
}