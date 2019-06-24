#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	int n, j, i, k;
	int soma = 0, x, y; 
	
	printf("Informe quantas cidades sao: ");
	scanf("%d", &k);
	
	printf("Informe quantos Itinerarios sao: "); 
	scanf("%d", &n);
	
	int itn[n];
	int cust[k][k];
	
	// Definindo a mat cust
	for(j = 0; j < k; j++){
		for(i = 0; i < k; i++){
			printf("Forneça o custo do transporte da cidade %d para %d: ", j, i);	
			scanf("%d", &cust[j][i]);
		}
		printf("\n");
	}
	//vetor itn e setando todos os elementos

	printf("\n Informe as sequencias dos itinerarios:  ");
	for(j =0; j < n; j++){
		scanf("%d", &itn[j]);
		if(itn[j] > (k-1)){
			printf("\t\t\t\t Erro! Itinerario desconhecido");
			goto fim;
		}
		printf(" ->\t ");
	}
	
	printf("\n");

	for(j = 0; j < (n-1); j++){
		
		x = itn[j];	
		y = itn[j+1];
		
		soma += cust[x][y];	
	}
	
	printf("\n Custo total dos itinerarios foi de: R$ %d", soma);
	fim:
	return 0;
}

