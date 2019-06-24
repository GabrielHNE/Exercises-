#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
	int i, j, n;
	int soma = 0, ver = 1, somaPD= 0, somaSD = 0,soma2 = 0;

	printf("Forneca a ordem da matriz: ");
	scanf("%d", &n);
	int quad[n+1][n+1]; // esse tipo de assimilação esta incorreta, nao se pode usar uma variavel para indicar o endereço de memoria da matriz

	//For para receber os valres da matriz e fazer a soma das linhas;
	printf("\n forneca os valores da matriz: \n");
	for(j = 0; j < n; j++){
		for(i = 0; i < n; i++){
			printf("Forneca o valor na posicao %d,%d: ", j,i);
			scanf("%d", &quad[j][i]);
		}
	}

	// soma de todas as linhas colunas e diagonal principal e secundaria
	for(j =0; j < n; j++){
		soma = 0;
		soma2 = 0;

		for(i = 0; i < n;i++){
			soma2 += quad[i][j]; 	// soma das colunas (uma de cada vez)
			soma += quad[j][i];		// soma das linhas (uma de cada vez)

			if(j == i){ 			//Para somar a diagonal principal
				somaPD += quad[j][i];
			}

			if((n-1) == (j+i)){ 			//Para somar a diagonal secundaria
				somaSD += quad[j][i];
			}
		}
		quad[j][n] = soma; 			// precisou ser dessa forma para nao ser necessario zerar a posiçao da soma;
		quad[n][j] = soma2;
	}

	//verificador

	if(somaSD == somaSD){
		quad[n][n] = somaPD;
	for(j = 1; j <= n; j++){
		
		if((quad[0][n] != quad[j][n]) || (quad[n][0] != quad[n][j])){
				printf("bug aqui");
				ver = 0;
				break;
				}
			}		
	} else {
		ver = 0;
	}
	
	// apenas para printar a matriz (NÂO E NECESSARIO)
	for(j = 0; j <= n; j++){
		for(i = 0; i <= n; i++){
			printf("\t %d ",quad[j][i]);
		}
		printf("\n");
	}

	if(ver == 1){
		printf("Magico", n,n);
	} else {
		printf("NAO e Magico", n,n);
	}
	return 0;
}

