#include "ponto.c"

int main(void){
    	float x = 2, y = 3;
    	
    	// CRIAÇÃO DO PRIMEIRO PONTO
    	ponto * ponto1 = criar_ponto(x, y);
    	acessar_ponto(ponto1, &x, &y);
    	printf("Ponto 1: (%.1f, %.1f)", ponto1 -> x, ponto1 -> y);
    	
    	// MODIFICAÇÃO DO PRIMEIRO PONTO
    	x = 6;
    	y = 1;
    	atribuir_ponto(ponto1, x, y);
    	printf("\nPonto 1 Modificado: (%.1f, %.1f)", ponto1 -> x, ponto1 -> y);
    	
    	// CRIAÇÃO DO SEGUNDO PONTO
    	float a = 4, b = 8;
    	ponto * ponto2 = criar_ponto(a, b);
    	acessar_ponto(ponto2, &a, &b);
    	printf("\nPonto 2: (%.1f, %.1f)", ponto2 -> x, ponto2 -> y);
    	
    	// DISTÂNCIA ENTRE DOIS PONTOS
    	float dist = distancia_pontos(ponto1, ponto2);
    	printf("\nDistância entre P1 e P2: %.2f", dist);
    	
    	// DESTRUIÇÃO DE PONTOS
    	destruir_ponto(ponto1);
    	destruir_ponto(ponto2);
}
