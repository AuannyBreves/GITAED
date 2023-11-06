#ifndef COMPLEXO_H_INCLUDED
#define COMPLEXO_H_INCLUDED

struct Complexo{
    double real;
    double imag;
};

typedef struct Complexo complexo;

complexo * criar_complexo(double real, double imag);
void destruir_complexo(complexo *z);
void somar_complexos(complexo *z1, complexo *z2);
void subtrair_complexos(complexo *z1, complexo *z2);
void multiplicar_complexos(complexo *z1, complexo *z2);
void dividir_complexos(complexo *z1, complexo *z2);

#endif // COMPLEXO_H_INCLUDED