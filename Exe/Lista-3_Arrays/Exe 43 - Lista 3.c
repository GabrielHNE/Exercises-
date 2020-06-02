#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv){
	int a[10], aux;
	int i,j, cont = 0;
	
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	
	//loop que verifica se é igual entao transforma em um valor nulo ou negativo
	for(i=0;i<9;i++){
		for(j=i;j<9;j++){
			if(a[i]==a[j+1]){
				a[j+1] = 0;
			}
		}
	}
	//for que joga para a ultima posicao os elementos que nao seram printados
	for(j=0;j<10;j++){
		for(i=0;i<(10-cont);i++){
			
			if(a[i] == 0 || a[i] < 0){
				aux = a[i];
				a[i] = a[9-cont];
				a[9-cont] = aux;
				cont ++;
			}
		}
	}
	system("cls");
	printf("\n vetor compactado: ");
	for(i=0;i<10-cont;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}




