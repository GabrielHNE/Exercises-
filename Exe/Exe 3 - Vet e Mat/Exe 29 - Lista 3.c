#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc, char** argv){
	unsigned long int vetor[5], i=2, soma =0, j;
	int cont=0;
	/*
	//vamos primeiramente calcular os primeiros 5 numeros primos dos numeros de mersenne
	do{
		x = (pow(2,i)-1);
		//verificar se x é primo
		for(j = 2 ; j<x;j++){
			if((x%j) == 0){
				ver ++;
			}
		}
		if(ver ==0){
			valor = pow(2,i-1)*x;
			cont++;
			printf("%lld ", valor);
		}
		i++;
	}while(cont != 5);
	
	*/
	do{
		soma =0;
		for(j = 1; j<=(i/2);j++){
			if((i % j) == 0){
				soma = soma + j;
			}
		}
		
		if(soma == i){
			vetor[cont] = i;
			printf("%lu ", vetor[cont]);
			cont ++;
		}
		
		i++;
	} while(cont <5);
	
	/*for(i=0; i<5;i++){
		printf("%d", vetor[i]);
	}*/
	
	return 0;
}

