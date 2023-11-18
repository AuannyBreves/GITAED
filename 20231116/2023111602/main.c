#include "vetor.c"

int main(){
	// CRIAÇÃO DOS VETORES
	vetor *v1 = criar_vetor(2, 3, 4);
	vetor *v2 = criar_vetor(5, 2, 2);
	vetor *resultado = criar_vetor(0, 0, 0);
	printf("VETORES");
	printf("\nV1 = [%1.f, %1.f, %1.f]", v1->x, v1->y, v1->z);
	printf("\nV2 = [%1.f, %1.f, %1.f]", v2->x, v2->y, v2->z);
	
	// SOMA DE VETORES
	soma_vetores(v1, v2, resultado);
	printf("\n\nSOMA DE VETORES = [%1.f, %1.f, %1.f]", resultado->x, resultado->y, resultado->z);
	
	// PRODUTO ESCALAR
	printf("\nPRODUTO ESCALAR = %1.f", produto_escalar(v1, v2));
}