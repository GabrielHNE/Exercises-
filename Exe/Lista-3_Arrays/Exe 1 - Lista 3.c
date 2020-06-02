#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	
	int i, j, ver1 = 0, ver0 = 0, aux = 1, n;
	
	printf("Informe a ordem da matriz: ");
	scanf("%d", &n);
	
	int	mat[n][n];
	/* {
		{0,0,0,1},			
		{1,0,0,0},
		{0,0,1,0},
		{0,1,0,0}
		};
	*/
	// for para iserir valores na matriz e verificar as linhas
	for(i = 0; i < n; i++){
		printf("Informe o valor na linha %d \n", i+1); 
		ver1=0;
		ver0=0;
		
		for(j=0; j < n; j++){
			printf("Informe o valor na posicao %d, %d: ", i+1, j+1); 
			scanf("%d", &mat[i][j]);
			
			if(mat[i][j] == 1){
				ver1 ++;
			} else if (mat[i][j] == 0){
				ver0 ++;
			}
			printf("\n");
		}
		if(ver0 != (n-1) || ver1 != 1){ 
				aux = 0;
			}
			
	}
		
		
	/*	As variavéis:
		v0 -> verifica a quantidade de 0's na linha;
		v1 -> verifica a quantidade de 1's na linha;
		*******LEMBRANDO QUE VALEM APENAS OS VALORES 1's e 0's**********
		** Tal que o total de 0's é dado por n-1
	*/
	
	//Verificação para colunas
	for( i = 0; i < n; i++){
		ver0 = 0;
		ver1 = 0;
		for(j = 0; j < n; j++){
			
			if(mat[j][i] == 1){
				ver1 ++;
			} else if (mat[j][i] == 0){
				ver0 ++;
			} else { aux = 1;}
		}
		if(ver0 != (n-1) || ver1 != 1){ 
				aux = 0;
			}
	}
	// verifica o estado de AUX -> se 1 ou 0
	if(aux == 1){
	printf("Permuta");
	}
	else {
		printf("N Permuta");
	} 
		
	return 0;
}

