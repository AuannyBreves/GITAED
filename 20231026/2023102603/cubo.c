#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

cubo * criar_cubo(int lado){
    cubo *cubo = malloc(sizeof(lado));
    cubo -> lado = lado;
    return cubo;
}

void destruir_cubo(cubo *cb){
    free(cb);
}

void mostrar_lado(cubo *cb){
    printf("\nLado: %d", cb -> lado);
}

void calcular_area(cubo *cb){
    int lado = cb -> lado;
    int area = 6 * (lado * lado);
    printf("\nÁrea: %d", area);
}

void calcular_volume(cubo *cb){
    int lado = cb -> lado;
    int volume = lado * lado * lado;
    printf("\nVolume: %d", volume);
}