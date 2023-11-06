#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

struct Data {
    char data[30];
};

typedef struct Data data;

void preencher_data(data *dt);
void imprimir_data(data *dt);

#endif // DATA_H_INCLUDED