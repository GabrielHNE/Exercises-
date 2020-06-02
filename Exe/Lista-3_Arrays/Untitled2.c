#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int vetor[5], i=2, soma =0,j;
	int cont=0;
	
		do{
		soma =0;
		for(j = 1; j<=(i/2);j++){
			if((i % j) == 0){
				soma = soma + j;
			}
		}
		
		if(soma == i){
			vetor[cont] = i;
			printf("%d ", vetor[cont]);
			cont ++;
		}
		
		i++;
	} while(cont <5);
	
	/*for(j=0; j<5;j++){
		printf("%d", vetor[i]);
	}*/
	
	return 0;
}

