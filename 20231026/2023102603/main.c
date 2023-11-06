#include "cubo.c"

int main(void){
	int lado;
	
	// INPUT
	printf("Qual o tamanho do lado do cubo? ");
	scanf("%d", &lado);
	
	// CRIAÇÃO DO CUBO
	cubo * cubo1 = criar_cubo(lado);
	
	// CALCULO DE LADO, ÁREA E VOLUME
	mostrar_lado(cubo1);
	calcular_area(cubo1);
	calcular_volume(cubo1);
	
	// DESTRUIÇÃO DO CUBO
	destruir_cubo(cubo1);
}