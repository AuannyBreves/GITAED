#include "data.c"

int main(void) {
    data * data1 = malloc(sizeof(data));
    preencher_data(data1);
    imprimir_data(data1);
    return 0;
}