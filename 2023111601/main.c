#include <stdio.h>
#include <string.h>

int k_esimo_digito(int n, int k){
    if (k == 1){
        return n % 10;
    } else {
       return k_esimo_digito(n/10, k-1);
    }
}

int main(){
	// TESTES DA FUNÇÃO
	printf("N = 3789   K = 1  Retorno = %d", k_esimo_digito(3789, 1));
	printf("\nN = 3789   K = 2  Retorno = %d", k_esimo_digito(3789, 2));
	printf("\nN = 3789   K = 3  Retorno = %d", k_esimo_digito(3789, 3));
	printf("\nN = 3789   K = 4  Retorno = %d", k_esimo_digito(3789, 4));
}