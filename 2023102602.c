#include <stdio.h>
#include <stdlib.h>
#include "2023102602.h"

data * criar_data(int d, int m, int a){
    data *out = malloc(sizeof(data));
    out -> dia = d;
    out -> mes = m;
    out -> ano = a;
    return out;
}

int preencher_data(data *dt, int d, int m, int a){
    if (dt == NULL){
        return 0;
    }
    dt -> dia = d;
    dt -> mes = m;
    dt -> ano = a;
    return 1;
}

int mostrar_data(data *dt){
    if (dt == NULL){
        return 0;
    }
    printf("%d/%d/%d", dt -> dia, dt -> mes, dt -> ano);
    return 1;
}

int main(void){
	int dia, mes, ano;
	
	//INPUT DA DATA DE ANIVERSÁRIO
	printf("Informe sua data de nascimento:\n");
	scanf("%d %d %d", &dia, &mes, &ano);
	
	//USO DAS FUNÇÕES DA BIBLIOTECA DATA
	data *registro = criar_data(dia, mes, ano);
	preencher_data(registro, dia, mes, ano);
	printf("\nData registrada: ");
	mostrar_data(registro);
};