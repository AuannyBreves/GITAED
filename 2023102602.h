#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

struct Data {
    int dia, mes, ano;
};

typedef struct Data data;

data * criar_data(int d, int m, int a);
int preencher_data(data *dt, int d, int m, int a);
int mostrar_data(data *dt);

#endif // DATA_H_INCLUDED