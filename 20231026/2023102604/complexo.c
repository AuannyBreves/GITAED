#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

complexo * criar_complexo(double real, double imag) {
    complexo * z = malloc(sizeof(complexo));
    z -> real = real;
    z -> imag = imag;
    return z;
}

void destruir_complexo(complexo *z) {
    free(z);
}

void somar_complexos(complexo *z1, complexo *z2) {
    complexo resultado;
    resultado.real = z1 -> real + z2 -> real;
    resultado.imag = z1 -> imag + z2 -> imag;
    printf("\nSoma: %.2f + %.2fi", resultado.real, resultado.imag);
}

void subtrair_complexos(complexo *z1, complexo *z2) {
    complexo resultado;
    resultado.real = z1-> real - z2 -> real;
    resultado.imag = z1 -> imag - z2 -> imag;
    printf("\nSubtração: %.2f + %.2fi", resultado.real, resultado.imag);
}

void multiplicar_complexos(complexo *z1, complexo *z2) {
    complexo resultado;
    resultado.real = (z1 -> real * z2 -> real);
    if ((z1 -> imag * z2 -> imag) > 0){
        resultado.real = resultado.real - (z1 -> imag * z2 -> imag);
    } else{
        resultado.real = resultado.real + (z1 -> imag * z2 -> imag);
    }
    resultado.imag = (z1 -> real * z2 -> imag) + (z1 -> imag * z2 -> real);
    printf("\nMultiplicação: %.2f + %.2fi", resultado.real, resultado.imag);
}

void dividir_complexos(complexo *z1, complexo *z2) {
    complexo resultado;
    double divisor = (z2 -> real * z2 -> real) + (z2 -> imag * z2 -> imag);
    resultado.real = ((z1 -> real * z2 -> real) + (z1 -> imag * z2 -> imag)) / divisor;
    resultado.imag = ((z1 -> imag * z2 -> real) - (z1 -> real * z2 -> imag)) / divisor;
    printf("\nDivisão: %.2f + %.2fi", resultado.real, resultado.imag);
}