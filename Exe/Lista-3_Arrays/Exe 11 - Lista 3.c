#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv){
	int n, m, i,j,aux, cont=0, ver=0;
	int vetor[100];
	
	printf("QTD de participantes (max 100): ");
	scanf("%d", &n);
	printf("\n Posição Inicial: ");
	scanf("%d", &m);
	
	//enumerar as posições com base em N
	for(i = 0; i<n;i++){
		vetor[i]=i+1;
	}
	
	for(i = 0; i<n; i++){
		for(j =(m-1); j<n-1; j++){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
		}
	}	
	
	for(i = 0; i<n; i++){ 
		printf("%d", vetor[i]);
	}
		
//	do{
//	} while(ver<n);	
	return 0;
}




