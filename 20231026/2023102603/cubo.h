#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

struct Cubo{
    int lado;
};

typedef struct Cubo cubo;

cubo * criar_cubo(int lado);
void destruir_cubo(cubo *cb);
void mostrar_lado(cubo *cb);
void calcular_area(cubo *cb);
void calcular_volume(cubo *cb);

#endif // CUBO_H_INCLUDED